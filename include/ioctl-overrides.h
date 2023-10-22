#include <linux/types.h>

/*
 * Layout of snp_guest_request_ioctl
 * since kernel v6.4:
 * struct snp_guest_request_ioctl {
 *
 *	__u8 msg_version;
 *
 *	__u64 req_data;
 *	__u64 resp_data;
 *
 *	union {
 *		__u64 exitinfo2;
 *		struct {
 *			__u32 fw_error;
 *			__u32 vmm_error;
 *		};
 *	};
 * };
*/
struct guest_request_ioctl {
	/* message version number (must be non-zero) */
	__u8 msg_version;

	/* Request and response structure address */
	__u64 req_data;
	__u64 resp_data;

	__u64 fw_err;
};
