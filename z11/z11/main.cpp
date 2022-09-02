#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
#pragma warning(disable:4996);

typedef struct _pdu_t {
	int v1;
	uint8_t v2;
	uint8_t* buf;
	bool rev;
	uint8_t* rep;
}pdu_t;

char* strsep(char** s, const char* ct)
{
	char* sbegin = *s;
	char* end;
	if (sbegin == NULL)
		return NULL;
	end = strpbrk(sbegin, ct);
	if (end)
		*end++ = '\0';
	*s = end;
	return sbegin;
}

int main1() {

	/*pdu_t* pdu;
	uint8_t buf_t[5] = { 65,66,67,68,69 };
	uint8_t rep_t[5] = { 70,71,72,73,74 };
	pdu = (pdu_t*)malloc(sizeof(int) + sizeof(uint8_t) + sizeof(bool) + 10);
	pdu->v1 = 12;
	pdu->v2 = 13;
	pdu->rev = false;
	uint8_t* rr;
	rr = pdu->buf = (uint8_t*)malloc(sizeof(buf_t));
	memcpy(pdu->buf, buf_t, sizeof(buf_t));

	pdu->rep = (uint8_t*)malloc(sizeof(rep_t));
	memcpy(pdu->rep, rep_t, sizeof(rep_t));

	free(pdu->buf);
	free(pdu->rep);
	free(pdu);*/

	while (1) {
		cout << "[shell]: " << endl;
		char cmdline[256];
		int ch, i = 0;
		while ((ch = getchar()) != EOF && ch != '\n' && i<255) {
			cmdline[i++] = (char)ch;
		}
		cmdline[i] = '\0';
		if (i > 0) {
			int argc = -1;
			char argv[5][32];
			char* str = cmdline;
			char* arg;
			while (str != NULL && *str != '\0') {
				arg = strsep(&str, " ");
				if (++argc < 5) strncpy(argv[argc], arg, 32);
				if (str != NULL) while (*str != '\0' && isblank(*str)) str++;
			}

			if (argc >= 0) {
				if (strncmp(argv[0], "logger", 32) == 0) cout << "yes" << endl;
				else cout << "no" << endl;
			}
		}
	}

	return 0;
}

char get_0F(uint8_t v) {
	switch (v) {
	case 0x00:
		return '0';
		break;
	case 0x01:
		return '1';
		break;
	case 0x02:
		return '2';
		break;
	case 0x03:
		return '3';
		break;
	case 0x04:
		return '4';
		break;
	case 0x05:
		return '5';
		break;
	case 0x06:
		return '6';
		break;
	case 0x07:
		return '7';
		break;
	case 0x08:
		return '8';
		break;
	case 0x09:
		return '9';
		break;
	case 0x0A:
		return 'A';
		break;
	case 0x0B:
		return 'B';
		break;
	case 0x0C:
		return 'C';
		break;
	case 0x0D:
		return 'D';
		break;
	case 0x0E:
		return 'E';
		break;
	case 0x0F:
		return 'F';
		break;
	default:
		return ' ';
		break;
	}
	return ' ';
}

void get_hex_val(uint8_t val, char* out) {
	out[0] = get_0F((val & 0xF0) >> 4);
	out[1] = get_0F(val & 0x0F);
	out[2] = 0;
}

void plus_line(char* line_str, int pos) {
	if (pos >= 0) {
		if (line_str[pos] < '9') {
			line_str[pos] = line_str[pos] + 1;
		}
		else {
			line_str[pos] = '0';
			plus_line(line_str, pos - 1);
		}
	}
}

void dump(const uint8_t* buf, uint32_t len) {
	uint32_t i = 0;
	char tmp_val[4] = { 0,0,0,0 };
	char line_str[5] = { '0','0','0','1',0 };
	int word_count = 0;
	for (i = 0; i < len; ++i) {
		if (word_count == 0) {
			printf("[%s]", line_str);
			plus_line(line_str, 3);
		}
		else if (word_count == 5) printf("==-==");
		get_hex_val(buf[i], tmp_val);
		printf("%s", tmp_val);
		word_count++;
		if (word_count >= 10) {
			word_count = 0;
			printf("\r\n");
		}
	}
	if (word_count > 0) printf("\r\n");
}

void LOG_DUMP(void* buf, uint32_t len) {
	time_t t = time(NULL);
	struct tm now;
	gmtime_s(&now, &t);
	printf("[DUMP] (%d/%d/%d %d:%d:%d)<%S>", now.tm_year + 1900, now.tm_mon + 1, now.tm_mday, now.tm_hour, now.tm_min, now.tm_sec, "nms_session");
	printf("\r\n");
	dump((const uint8_t*)buf, len);
}

int main() {

	uint8_t* buf;
	buf = (uint8_t*)malloc(13 * sizeof(uint8_t));
	for (int i = 0; i < 13; i++) {
		buf[i] = 0x00 + i + 1;
	}
	LOG_DUMP(buf, 13);

	return 0;
}
