/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVMetadataItem.h"

@class NSDictionary, NSString, NSLocale, AVMutableMetadataItemInternal;
@protocol NSCopying, NSObject;

@interface AVMutableMetadataItem : AVMetadataItem {
	AVMutableMetadataItemInternal *_mutablePriv;	// 8 = 0x8
}
@property(assign) XXStruct_pwHToB duration;	// G=0x303c5d7d; S=0x303c5e25; 
@property(copy) NSDictionary *extraAttributes;	// G=0x303c5dc5; S=0x303c6349; 
@property(copy) id<NSCopying, NSObject> key;	// G=0x303c5cd5; S=0x303c64b9; 
@property(copy) NSString *keySpace;	// G=0x303c5cf5; S=0x303c6451; 
@property(copy) NSLocale *locale;	// G=0x303c5d15; S=0x303c63f9; 
@property(assign) XXStruct_pwHToB time;	// G=0x303c5d35; S=0x303c5de5; 
@property(copy) id<NSCopying, NSObject> value;	// G=0x303c6521; S=0x303c63a1; 
+ (id)metadataItem;	// 0x303c655d
- (id)copyWithZone:(NSZone *)zone;	// 0x303c6321
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x303c5d7d
// declared property getter: - (id)extraAttributes;	// 0x303c5dc5
// declared property getter: - (id)key;	// 0x303c5cd5
// declared property getter: - (id)keySpace;	// 0x303c5cf5
// declared property getter: - (id)locale;	// 0x303c5d15
// declared property setter: - (void)setDuration:(XXStruct_pwHToB)duration;	// 0x303c5e25
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x303c6349
// declared property setter: - (void)setKey:(id)key;	// 0x303c64b9
// declared property setter: - (void)setKeySpace:(id)space;	// 0x303c6451
// declared property setter: - (void)setLocale:(id)locale;	// 0x303c63f9
// declared property setter: - (void)setTime:(XXStruct_pwHToB)time;	// 0x303c5de5
// declared property setter: - (void)setValue:(id)value;	// 0x303c63a1
// declared property getter: - (XXStruct_pwHToB)time;	// 0x303c5d35
// declared property getter: - (id)value;	// 0x303c6521
@end
