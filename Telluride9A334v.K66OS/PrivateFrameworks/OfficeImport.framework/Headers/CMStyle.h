/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMStyle : NSObject {
@private
	NSMutableDictionary *properties;	// 4 = 0x4
	NSMutableString *mStyleString;	// 8 = 0x8
}
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x35581501; converted property
- (id)init;	// 0x354e2971
- (id)initWithStyle:(id)style;	// 0x357d6535
- (void)addProperty:(id)property forKey:(id)key;	// 0x354e6729
- (void)appendDefaultBorderStyle;	// 0x356a3c35
- (void)appendPositionInfoFromRect:(CGRect)rect;	// 0x354e4439
- (void)appendPropertyForName:(id)name color:(id)color;	// 0x356affd1
- (void)appendPropertyForName:(id)name floatValue:(float)value;	// 0x356b61e1
- (void)appendPropertyForName:(id)name intValue:(int)value;	// 0x3556ca9d
- (void)appendPropertyForName:(id)name length:(double)length unit:(int)unit;	// 0x354e4f5d
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing;	// 0x354e5efd
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing lineHeight:(float)height unit:(int)unit;	// 0x354e612d
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing unit:(int)unit;	// 0x354e5f21
- (void)appendPropertyForName:(id)name stringValue:(id)value;	// 0x354e8df1
- (void)appendPropertyForName:(id)name stringWithColons:(id)colons;	// 0x354e43b9
- (void)appendPropertyString:(id)string;	// 0x356b03a5
- (void)appendSizeInfoFromRect:(CGRect)rect;	// 0x3556bf85
- (id)attributeForName:(id)name;	// 0x35575239
- (id)cssStyleString;	// 0x354e2561
- (void)dealloc;	// 0x354e2825
// converted property getter: - (id)properties;	// 0x35581501
- (id)propertyForName:(id)name;	// 0x35581399
@end
