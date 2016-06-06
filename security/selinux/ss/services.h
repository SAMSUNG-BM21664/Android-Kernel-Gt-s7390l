/*
 * Implementation of the security services.
 *
 * Author : Stephen Smalley, <sds@epoch.ncsc.mil>
 */
#ifndef _SS_SERVICES_H_
#define _SS_SERVICES_H_

#include "policydb.h"
#include "sidtab.h"

extern struct policydb policydb;

void services_compute_xperms_drivers(struct extended_perms *xperms,
<<<<<<< HEAD
 				struct avtab_node *node);
 
void services_compute_xperms_decision(struct extended_perms_decision *xpermd,
 				struct avtab_node *node);
=======
				struct avtab_node *node);

void services_compute_xperms_decision(struct extended_perms_decision *xpermd,
					struct avtab_node *node);
>>>>>>> 7bfb48d... Selinux: Update selinux for cm-13

#endif	/* _SS_SERVICES_H_ */

