/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBShape.h"
#import "UIKBCacheKey.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString, UIKBAttributeList;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
	NSString *m_name;	// 60 = 0x3c
	NSString *m_representedString;	// 64 = 0x40
	NSString *m_displayString;	// 68 = 0x44
	NSString *m_displayType;	// 72 = 0x48
	NSString *m_interactionType;	// 76 = 0x4c
	NSString *m_variantType;	// 80 = 0x50
	UIKBAttributeList *m_attributes;	// 84 = 0x54
	unsigned m_displayTypeHint;	// 88 = 0x58
	NSString *m_displayRowHint;	// 92 = 0x5c
	NSArray *m_variantKeys;	// 96 = 0x60
	NSString *m_overrideDisplayString;	// 100 = 0x64
	NSString *m_clientVariantRepresentedString;	// 104 = 0x68
	NSString *m_clientVariantActionName;	// 108 = 0x6c
	BOOL m_visible;	// 112 = 0x70
	BOOL m_ghost;	// 113 = 0x71
	int m_splitMode;	// 116 = 0x74
	NSArray *m_flicks;	// 120 = 0x78
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x353b6e39; S=0x353b6611; @synthesize=m_attributes
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x353b6ba9; 
@property(copy, nonatomic) NSString *clientVariantActionName;	// G=0x353b6f79; S=0x353b6f89; @synthesize=m_clientVariantActionName
@property(copy, nonatomic) NSString *clientVariantRepresentedString;	// G=0x353b6f45; S=0x353b6f55; @synthesize=m_clientVariantRepresentedString
@property(assign, nonatomic) BOOL disabled;	// G=0x353b6871; S=0x353b68bd; 
@property(retain, nonatomic) NSString *displayRowHint;	// G=0x353b6ea9; S=0x353b6eb9; @synthesize=m_displayRowHint
@property(copy, nonatomic) NSString *displayString;	// G=0x353b6d69; S=0x353b6d79; @synthesize=m_displayString
@property(copy, nonatomic) NSString *displayType;	// G=0x353b6d9d; S=0x353b6dad; @synthesize=m_displayType
@property(assign, nonatomic) unsigned displayTypeHint;	// G=0x353b6e89; S=0x353b6e99; @synthesize=m_displayTypeHint
@property(retain, nonatomic) NSArray *flicks;	// G=0x353b6fad; S=0x353b6fbd; @synthesize=m_flicks
@property(assign, nonatomic) BOOL hidden;	// G=0x353b65d1; S=0x353b65f5; 
@property(copy, nonatomic) NSString *interactionType;	// G=0x353b6dd1; S=0x353b6de1; @synthesize=m_interactionType
@property(readonly, assign, nonatomic) BOOL isClientVariantOverride;	// G=0x353b6b1d; 
@property(assign, nonatomic) BOOL isGhost;	// G=0x353b6e69; S=0x353b6e79; @synthesize=m_ghost
@property(copy, nonatomic) NSString *name;	// G=0x353b6d01; S=0x353b6d11; @synthesize=m_name
@property(copy, nonatomic) NSString *overrideDisplayString;	// G=0x353b6f11; S=0x353b6f21; @synthesize=m_overrideDisplayString
@property(copy, nonatomic) NSString *rendering;	// G=0x353b69a9; S=0x353b69d5; 
@property(copy, nonatomic) NSString *representedString;	// G=0x353b6d35; S=0x353b6d45; @synthesize=m_representedString
@property(assign, nonatomic) int splitMode;	// G=0x353b6fe1; S=0x353b6ff1; @synthesize=m_splitMode
@property(assign) int textAlignment;	// G=0x353b6a45; S=0x353b6aad; converted property
@property(copy, nonatomic) NSString *tint;	// G=0x353b690d; S=0x353b6939; 
@property(copy, nonatomic) NSArray *variantKeys;	// G=0x353b6edd; S=0x353b6eed; @synthesize=m_variantKeys
@property(retain) id variantPopupBias;	// G=0x353b6845; S=0x353b67d5; converted property
@property(copy, nonatomic) NSString *variantType;	// G=0x353b6e05; S=0x353b6e15; @synthesize=m_variantType
@property(assign, nonatomic) BOOL visible;	// G=0x353b6e49; S=0x353b6e59; @synthesize=m_visible
+ (id)key;	// 0x353b5ba1
+ (id)keyWithKey:(id)key;	// 0x353b5be9
- (id)init;	// 0x353b5f45
- (id)initWithCoder:(id)coder;	// 0x353b62a1
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10;	// 0x353b5f99
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10 ghost:(BOOL)ghost;	// 0x353b6011
// declared property getter: - (id)attributes;	// 0x353b6e39
- (BOOL)behavesAsShiftKey;	// 0x353b6cad
// declared property getter: - (id)cacheKey;	// 0x353b6ba9
// declared property getter: - (id)clientVariantActionName;	// 0x353b6f79
// declared property getter: - (id)clientVariantRepresentedString;	// 0x353b6f45
- (id)copyWithZone:(NSZone *)zone;	// 0x353b6561
- (void)dealloc;	// 0x353b6179
- (id)description;	// 0x353b6571
// declared property getter: - (BOOL)disabled;	// 0x353b6871
// declared property getter: - (id)displayRowHint;	// 0x353b6ea9
// declared property getter: - (id)displayString;	// 0x353b6d69
// declared property getter: - (id)displayType;	// 0x353b6d9d
// declared property getter: - (unsigned)displayTypeHint;	// 0x353b6e89
- (void)encodeWithCoder:(id)coder;	// 0x353b6445
// declared property getter: - (id)flicks;	// 0x353b6fad
// declared property getter: - (BOOL)hidden;	// 0x353b65d1
// declared property getter: - (id)interactionType;	// 0x353b6dd1
// declared property getter: - (BOOL)isClientVariantOverride;	// 0x353b6b1d
// declared property getter: - (BOOL)isGhost;	// 0x353b6e69
- (void)mergeAttributes:(id)attributes;	// 0x353b6651
// declared property getter: - (id)name;	// 0x353b6d01
// declared property getter: - (id)overrideDisplayString;	// 0x353b6f11
- (void)removeClientVariantActionInfo;	// 0x353b6b75
// declared property getter: - (id)rendering;	// 0x353b69a9
// declared property getter: - (id)representedString;	// 0x353b6d35
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x353b6611
// declared property setter: - (void)setClientVariantActionName:(id)name;	// 0x353b6f89
// declared property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x353b6f55
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x353b68bd
// declared property setter: - (void)setDisplayRowHint:(id)hint;	// 0x353b6eb9
// declared property setter: - (void)setDisplayString:(id)string;	// 0x353b6d79
// declared property setter: - (void)setDisplayType:(id)type;	// 0x353b6dad
// declared property setter: - (void)setDisplayTypeHint:(unsigned)hint;	// 0x353b6e99
// declared property setter: - (void)setFlicks:(id)flicks;	// 0x353b6fbd
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x353b65f5
// declared property setter: - (void)setInteractionType:(id)type;	// 0x353b6de1
// declared property setter: - (void)setIsGhost:(BOOL)ghost;	// 0x353b6e79
// declared property setter: - (void)setName:(id)name;	// 0x353b6d11
// declared property setter: - (void)setOverrideDisplayString:(id)string;	// 0x353b6f21
// declared property setter: - (void)setRendering:(id)rendering;	// 0x353b69d5
// declared property setter: - (void)setRepresentedString:(id)string;	// 0x353b6d45
// declared property setter: - (void)setSplitMode:(int)mode;	// 0x353b6ff1
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x353b6aad
// declared property setter: - (void)setTint:(id)tint;	// 0x353b6939
// declared property setter: - (void)setVariantKeys:(id)keys;	// 0x353b6eed
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x353b67d5
// declared property setter: - (void)setVariantType:(id)type;	// 0x353b6e15
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x353b6e59
// declared property getter: - (int)splitMode;	// 0x353b6fe1
// converted property getter: - (int)textAlignment;	// 0x353b6a45
// declared property getter: - (id)tint;	// 0x353b690d
- (id)variantDisplayString;	// 0x353b6699
// declared property getter: - (id)variantKeys;	// 0x353b6edd
// converted property getter: - (id)variantPopupBias;	// 0x353b6845
// declared property getter: - (id)variantType;	// 0x353b6e05
// declared property getter: - (BOOL)visible;	// 0x353b6e49
@end
