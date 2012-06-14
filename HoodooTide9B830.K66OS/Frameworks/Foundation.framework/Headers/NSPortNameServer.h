/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSPortNameServer : NSObject {
}
+ (id)defaultPortNameServer;	// 0x3163c4c9
+ (id)systemDefaultPortNameServer;	// 0x3163c491
- (id)portForName:(id)name;	// 0x3163c4e5
- (id)portForName:(id)name host:(id)host;	// 0x3163c509
- (id)portForName:(id)name onHost:(id)host;	// 0x3163c58d
- (BOOL)registerPort:(id)port forName:(id)name;	// 0x3163c575
- (BOOL)registerPort:(id)port name:(id)name;	// 0x3163c52d
- (BOOL)removePortForName:(id)name;	// 0x3163c551
@end
