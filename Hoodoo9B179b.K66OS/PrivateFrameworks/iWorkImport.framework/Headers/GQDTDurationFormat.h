/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDTDurationFormat : NSObject <GQDNameMappable> {
@private
	CFStringRef mFormatString;	// 4 = 0x4
}
+ (const StateSpec *)stateForReading;	// 0x359c1ea5
- (id)initWithFormatString:(CFStringRef)formatString;	// 0x359c1fa5
- (void)dealloc;	// 0x359c202d
- (CFStringRef)formatString;	// 0x359c1eb1
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x359c1ff5
@end
