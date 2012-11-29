/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPortNameServer.h"


@interface NSMachBootstrapServer : NSPortNameServer {
}
+ (id)sharedInstance;	// 0x3614d19d
- (id)portForName:(id)name;	// 0x3614d275
- (id)portForName:(id)name host:(id)host;	// 0x3614d421
- (id)portForName:(id)name options:(unsigned)options;	// 0x3614d1d9
- (BOOL)registerPort:(id)port name:(id)name;	// 0x3614d289
- (BOOL)removePortForName:(id)name;	// 0x3614d469
- (id)servicePortWithName:(id)name;	// 0x3614d335
@end
