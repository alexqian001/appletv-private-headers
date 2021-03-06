/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreImage-Structs.h"

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying> {
	void *_priv[8];	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CIImage *outputImage;	// G=0x36b96931; @dynamic
+ (id)_filterArrayFromProperties:(id)properties;	// 0x36b97f11
+ (id)_filterArrayFromProperties:(id)properties inputImageExtent:(CGRect)extent;	// 0x36b97839
+ (id)_propertyArrayFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x36b97101
+ (id)customAttributes;	// 0x36b96fe9
+ (id)filterArrayFromSerializedXMP:(id)serializedXMP inputImageExtent:(CGRect)extent;	// 0x36b970a5
+ (id)filterNamesInCategories:(id)categories;	// 0x36b960e1
+ (id)filterNamesInCategory:(id)category;	// 0x36b960a1
+ (id)filterWithName:(id)name;	// 0x36b95fa5
+ (id)filterWithName:(id)name keysAndValues:(id)values;	// 0x36b9603d
+ (id)serializedXMPFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x36b9702d
- (id)initWithCoder:(id)coder;	// 0x36b96b31
- (id)_copyFilterWithZone:(NSZone *)zone;	// 0x36b96d11
- (id)_filterClassDescription;	// 0x36b96fed
- (id)_initFromProperties:(id)properties;	// 0x36b980ed
- (BOOL)_isIdentity;	// 0x36b97025
- (id)_outputProperties;	// 0x36b97029
- (id)attributes;	// 0x36b96935
- (id)copyWithZone:(NSZone *)zone;	// 0x36b96d4d
- (void)dealloc;	// 0x36b967f1
- (id)description;	// 0x36b96e8d
- (void)encodeWithCoder:(id)coder;	// 0x36b96961
- (unsigned)hash;	// 0x36b95dc9
- (id)inputKeys;	// 0x36b968e1
- (BOOL)isEqual:(id)equal;	// 0x36b95c81
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36b96e7d
- (id)name;	// 0x36b967d5
// declared property getter: - (id)outputImage;	// 0x36b96931
- (id)outputKeys;	// 0x36b96909
- (void)setDefaults;	// 0x36b9695d
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x36b95ead
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x36b95f3d
@end

