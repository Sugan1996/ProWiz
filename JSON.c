# ProWiz
struct Ref{
	char * contact_person_id;
	char * first_name;
	char * last_name;
	char * email;	
};

struct Personal{
	char * contact_id;
	char * contact_name;
	char * street;
	char * area;
	char * city;
	struct Ref * contact_persons;	
} * persons;
