/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDMAPResponse.h"


__attribute__((visibility("hidden")))
@interface ATVServerInfoResponse : ATVDMAPResponse {
	unsigned short _clientMajorVersion;	// 4 = 0x4
	unsigned short _clientMinorVersion;	// 6 = 0x6
	unsigned long _serverVersion;	// 8 = 0x8
}
- (id)initWithClientSharingVersion:(id)clientSharingVersion serverSharingVer:(unsigned long)ver;	// 0xd92f5
- (id)responseBody;	// 0xd9401
@end
