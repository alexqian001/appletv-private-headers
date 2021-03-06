/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVMetadataItem.h"

@class NSLocale, NSDictionary, AVMutableMetadataItemInternal, NSString;
@protocol NSObject;

@interface AVMutableMetadataItem : AVMetadataItem {
	AVMutableMetadataItemInternal *_mutablePriv;	// 8 = 0x8
}
@property(assign) XXStruct_pwHToB duration;	// G=0x30243c49; S=0x30243ed5; 
@property(copy) NSDictionary *extraAttributes;	// G=0x30243d0d; S=0x30243f7d; 
@property(copy) id<NSCopying, NSObject> key;	// G=0x30243b59; S=0x30243d35; 
@property(copy) NSString *keySpace;	// G=0x30243b81; S=0x30243db1; 
@property(copy) NSLocale *locale;	// G=0x30243ba9; S=0x30243e2d; 
@property(assign) XXStruct_pwHToB time;	// G=0x30243bd1; S=0x30243e8d; 
@property(copy) id<NSCopying, NSObject> value;	// G=0x30243cc1; S=0x30243f1d; 
+ (id)metadataItem;	// 0x30243b15
- (id)copyWithZone:(NSZone *)zone;	// 0x30243fdd
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x30243c49
// declared property getter: - (id)extraAttributes;	// 0x30243d0d
// declared property getter: - (id)key;	// 0x30243b59
// declared property getter: - (id)keySpace;	// 0x30243b81
// declared property getter: - (id)locale;	// 0x30243ba9
// declared property setter: - (void)setDuration:(XXStruct_pwHToB)duration;	// 0x30243ed5
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x30243f7d
// declared property setter: - (void)setKey:(id)key;	// 0x30243d35
// declared property setter: - (void)setKeySpace:(id)space;	// 0x30243db1
// declared property setter: - (void)setLocale:(id)locale;	// 0x30243e2d
// declared property setter: - (void)setTime:(XXStruct_pwHToB)time;	// 0x30243e8d
// declared property setter: - (void)setValue:(id)value;	// 0x30243f1d
// declared property getter: - (XXStruct_pwHToB)time;	// 0x30243bd1
// declared property getter: - (id)value;	// 0x30243cc1
@end

