/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIKBShape.h"
#import "NSCopying.h"
#import "UIKBCacheKey.h"

@class UIKBAttributeList, NSString, NSArray;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
	NSString *m_name;	// 64 = 0x40
	NSString *m_representedString;	// 68 = 0x44
	NSString *m_displayString;	// 72 = 0x48
	NSString *m_displayType;	// 76 = 0x4c
	NSString *m_interactionType;	// 80 = 0x50
	NSString *m_variantType;	// 84 = 0x54
	UIKBAttributeList *m_attributes;	// 88 = 0x58
	unsigned m_displayTypeHint;	// 92 = 0x5c
	NSString *m_displayRowHint;	// 96 = 0x60
	NSArray *m_variantKeys;	// 100 = 0x64
	NSString *m_overrideDisplayString;	// 104 = 0x68
	NSString *m_clientVariantRepresentedString;	// 108 = 0x6c
	NSString *m_clientVariantActionName;	// 112 = 0x70
	BOOL m_visible;	// 116 = 0x74
	BOOL m_ghost;	// 117 = 0x75
	int m_splitMode;	// 120 = 0x78
	NSArray *m_flicks;	// 124 = 0x7c
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x31eef229; S=0x31eeea11; @synthesize=m_attributes
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x31eeeff9; 
@property(copy, nonatomic) NSString *clientVariantActionName;	// G=0x31eef329; S=0x31eef33d; @synthesize=m_clientVariantActionName
@property(copy, nonatomic) NSString *clientVariantRepresentedString;	// G=0x31eef305; S=0x31eef319; @synthesize=m_clientVariantRepresentedString
@property(assign, nonatomic) BOOL disabled;	// G=0x31eeeca5; S=0x31eeecf1; 
@property(retain, nonatomic) NSString *displayRowHint;	// G=0x31eef29d; S=0x31eef2ad; @synthesize=m_displayRowHint
@property(copy, nonatomic) NSString *displayString;	// G=0x31eef199; S=0x31eef1ad; @synthesize=m_displayString
@property(copy, nonatomic) NSString *displayType;	// G=0x31eef1bd; S=0x31eef1d1; @synthesize=m_displayType
@property(assign, nonatomic) unsigned displayTypeHint;	// G=0x31eef27d; S=0x31eef28d; @synthesize=m_displayTypeHint
@property(retain, nonatomic) NSArray *flicks;	// G=0x31eef34d; S=0x31eef35d; @synthesize=m_flicks
@property(assign, nonatomic) BOOL hidden;	// G=0x31eee9cd; S=0x31eee9f1; 
@property(copy, nonatomic) NSString *interactionType;	// G=0x31eef1e1; S=0x31eef1f5; @synthesize=m_interactionType
@property(readonly, assign, nonatomic) BOOL isClientVariantOverride;	// G=0x31eeef71; 
@property(assign, nonatomic) BOOL isGhost;	// G=0x31eef25d; S=0x31eef26d; @synthesize=m_ghost
@property(copy, nonatomic) NSString *name;	// G=0x31eef151; S=0x31eef165; @synthesize=m_name
@property(copy, nonatomic) NSString *overrideDisplayString;	// G=0x31eef2e1; S=0x31eef2f5; @synthesize=m_overrideDisplayString
@property(copy, nonatomic) NSString *rendering;	// G=0x31eeede5; S=0x31eeee11; 
@property(copy, nonatomic) NSString *representedString;	// G=0x31eef175; S=0x31eef189; @synthesize=m_representedString
@property(assign, nonatomic) int splitMode;	// G=0x31eef36d; S=0x31eef37d; @synthesize=m_splitMode
@property(assign) int textAlignment;	// G=0x31eeee8d; S=0x31eeeef5; converted property
@property(copy, nonatomic) NSString *tint;	// G=0x31eeed3d; S=0x31eeed69; 
@property(copy, nonatomic) NSArray *variantKeys;	// G=0x31eef2bd; S=0x31eef2d1; @synthesize=m_variantKeys
@property(retain) id variantPopupBias;	// G=0x31eeec79; S=0x31eeebfd; converted property
@property(copy, nonatomic) NSString *variantType;	// G=0x31eef205; S=0x31eef219; @synthesize=m_variantType
@property(assign, nonatomic) BOOL visible;	// G=0x31eef23d; S=0x31eef24d; @synthesize=m_visible
+ (id)key;	// 0x31eedfb1
+ (id)keyWithKey:(id)key;	// 0x31eedff9
- (id)init;	// 0x31eee341
- (id)initWithCoder:(id)coder;	// 0x31eee6a1
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10;	// 0x31eee395
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10 ghost:(BOOL)ghost;	// 0x31eee40d
// declared property getter: - (id)attributes;	// 0x31eef229
- (BOOL)behavesAsShiftKey;	// 0x31eef0fd
// declared property getter: - (id)cacheKey;	// 0x31eeeff9
// declared property getter: - (id)clientVariantActionName;	// 0x31eef329
// declared property getter: - (id)clientVariantRepresentedString;	// 0x31eef305
- (id)copyWithZone:(NSZone *)zone;	// 0x31eee959
- (void)dealloc;	// 0x31eee575
- (id)description;	// 0x31eee969
// declared property getter: - (BOOL)disabled;	// 0x31eeeca5
// declared property getter: - (id)displayRowHint;	// 0x31eef29d
// declared property getter: - (id)displayString;	// 0x31eef199
// declared property getter: - (id)displayType;	// 0x31eef1bd
// declared property getter: - (unsigned)displayTypeHint;	// 0x31eef27d
- (void)encodeWithCoder:(id)coder;	// 0x31eee83d
// declared property getter: - (id)flicks;	// 0x31eef34d
// declared property getter: - (BOOL)hidden;	// 0x31eee9cd
// declared property getter: - (id)interactionType;	// 0x31eef1e1
// declared property getter: - (BOOL)isClientVariantOverride;	// 0x31eeef71
// declared property getter: - (BOOL)isGhost;	// 0x31eef25d
- (void)mergeAttributes:(id)attributes;	// 0x31eeea51
// declared property getter: - (id)name;	// 0x31eef151
// declared property getter: - (id)overrideDisplayString;	// 0x31eef2e1
- (void)removeClientVariantActionInfo;	// 0x31eeefc5
// declared property getter: - (id)rendering;	// 0x31eeede5
// declared property getter: - (id)representedString;	// 0x31eef175
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x31eeea11
// declared property setter: - (void)setClientVariantActionName:(id)name;	// 0x31eef33d
// declared property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x31eef319
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x31eeecf1
// declared property setter: - (void)setDisplayRowHint:(id)hint;	// 0x31eef2ad
// declared property setter: - (void)setDisplayString:(id)string;	// 0x31eef1ad
// declared property setter: - (void)setDisplayType:(id)type;	// 0x31eef1d1
// declared property setter: - (void)setDisplayTypeHint:(unsigned)hint;	// 0x31eef28d
// declared property setter: - (void)setFlicks:(id)flicks;	// 0x31eef35d
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x31eee9f1
// declared property setter: - (void)setInteractionType:(id)type;	// 0x31eef1f5
// declared property setter: - (void)setIsGhost:(BOOL)ghost;	// 0x31eef26d
// declared property setter: - (void)setName:(id)name;	// 0x31eef165
// declared property setter: - (void)setOverrideDisplayString:(id)string;	// 0x31eef2f5
// declared property setter: - (void)setRendering:(id)rendering;	// 0x31eeee11
// declared property setter: - (void)setRepresentedString:(id)string;	// 0x31eef189
// declared property setter: - (void)setSplitMode:(int)mode;	// 0x31eef37d
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x31eeeef5
// declared property setter: - (void)setTint:(id)tint;	// 0x31eeed69
// declared property setter: - (void)setVariantKeys:(id)keys;	// 0x31eef2d1
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x31eeebfd
// declared property setter: - (void)setVariantType:(id)type;	// 0x31eef219
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x31eef24d
// declared property getter: - (int)splitMode;	// 0x31eef36d
// converted property getter: - (int)textAlignment;	// 0x31eeee8d
// declared property getter: - (id)tint;	// 0x31eeed3d
- (id)variantDisplayString;	// 0x31eeea99
// declared property getter: - (id)variantKeys;	// 0x31eef2bd
// converted property getter: - (id)variantPopupBias;	// 0x31eeec79
// declared property getter: - (id)variantType;	// 0x31eef205
// declared property getter: - (BOOL)visible;	// 0x31eef23d
@end
