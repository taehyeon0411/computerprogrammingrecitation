#include <stdio.h>

// Date
struct Date {
    unsigned short year;
    unsigned char month;
    unsigned char day;
};

// Address
struct Address {
    char* road;
    char* detail;
    char postal_code[6];
};

// Contact_Info
struct Contact_Info {
    char* email;
    char* phone;
};

// EEE
struct EEE {
    char* name;
    char* department;
    char* job_title;
    char resident_id[15];
    long long annual_salary;

    struct Date birth_date;
    struct Address address;
    struct Contact_Info contact_info;
};

// Function declaration
void eeeInit(struct EEE* person);

int main(void) {
    struct EEE person;

    eeeInit(&person);

    return 0;
}

void eeeInit(struct EEE* person) {
    person->name = 0;
    person->department = 0;
    person->job_title = 0;

    person->resident_id[0] = '\0';
    person->annual_salary = 0;

    person->birth_date.year = 0;
    person->birth_date.month = 0;
    person->birth_date.day = 0;

    person->address.road = 0;
    person->address.detail = 0;
    person->address.postal_code[0] = '\0';

    person->contact_info.email = 0;
    person->contact_info.phone = 0;
}

