/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	unsigned _type;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	unsigned _flags;	// 12 = 0xc
	void *_attr;	// 16 = 0x10
	void *_cache;	// 20 = 0x14
}
@property(assign) BOOL cachesInputImage;	// G=0x3134edf1; S=0x3134f139; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x3134eddd; S=0x3134f125; 
@property(copy) NSString *name;	// G=0x31298799; S=0x3134efe9; 
@property(readonly, assign) NSString *type;	// G=0x3134ee09; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3134ee05
+ (id)filterTypes;	// 0x3134eeed
+ (id)filterWithName:(id)name;	// 0x3134efd9
+ (id)filterWithType:(id)type;	// 0x3134ef9d
- (id)initWithCoder:(id)coder;	// 0x3134f285
- (id)initWithName:(id)name;	// 0x3134ee95
- (id)initWithType:(id)type;	// 0x3134ee1d
- (Object *)CA_copyRenderValue;	// 0x3129f9dd
// declared property getter: - (BOOL)cachesInputImage;	// 0x3134edf1
- (id)copyWithZone:(NSZone *)zone;	// 0x312999a5
- (void)dealloc;	// 0x3134f1f5
- (BOOL)enabled;	// 0x3134eea5
- (void)encodeWithCoder:(id)coder;	// 0x3134f3cd
// declared property getter: - (BOOL)isEnabled;	// 0x3134eddd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31299995
// declared property getter: - (id)name;	// 0x31298799
// declared property setter: - (void)setCachesInputImage:(BOOL)image;	// 0x3134f139
- (void)setDefaults;	// 0x3134f1a1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3134f125
// declared property setter: - (void)setName:(id)name;	// 0x3134efe9
- (void)setValue:(id)value forKey:(id)key;	// 0x31299a65
// declared property getter: - (id)type;	// 0x3134ee09
- (id)valueForKey:(id)key;	// 0x312987a9
@end
