/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WXSection : NSObject {
}
+ (void)initialize;	// 0x32c5f3a5
+ (void)mapFooter:(xmlNode *)footer toSection:(id)section state:(id)state;	// 0x32c61e35
+ (void)mapHeader:(xmlNode *)header toSection:(id)section state:(id)state;	// 0x32c5f739
+ (void)mapProperties:(xmlNode *)properties toSection:(id)section state:(id)state;	// 0x32c5fa19
+ (void)readFrom:(xmlNode *)from to:(id)to state:(id)state;	// 0x32c5f561
@end
