/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "CoreMotion-Structs.h"
#import "NSCopying.h"


@interface CMLogItem : NSObject <NSCoding, NSCopying> {
@private
	id _internalLogItem;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double timestamp;	// G=0x31c20bf1; 
- (id)initWithCoder:(id)coder;	// 0x31c20dbd
- (id)initWithTimestamp:(double)timestamp;	// 0x31c20c5d
- (id)copyWithZone:(NSZone *)zone;	// 0x31c20cd9
- (void)dealloc;	// 0x31c20d29
- (void)encodeWithCoder:(id)coder;	// 0x31c20d75
// declared property getter: - (double)timestamp;	// 0x31c20bf1
@end
