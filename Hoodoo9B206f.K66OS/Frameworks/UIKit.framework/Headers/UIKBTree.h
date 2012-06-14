/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBTree : NSObject <NSCopying> {
	int type;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	NSMutableDictionary *properties;	// 12 = 0xc
	NSMutableArray *subtrees;	// 16 = 0x10
	NSMutableDictionary *cache;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL acceptsShiftLock;	// G=0x354b16dd; 
@property(retain, nonatomic) NSMutableDictionary *cache;	// G=0x353f7951; S=0x353f7601; @synthesize
@property(retain) id clientVariantActionName;	// G=0x3541f11d; S=0x353fb765; converted property
@property(retain) id clientVariantRepresentedString;	// G=0x3541f0f1; S=0x353fb70d; converted property
@property(assign) BOOL disabled;	// G=0x353faec9; S=0x356811b1; converted property
@property(assign) int displayRowHint;	// G=0x35400e6d; S=0x353fae0d; converted property
@property(retain) id displayString;	// G=0x353fa2e9; S=0x353f9e9d; converted property
@property(assign) int displayType;	// G=0x353fae85; S=0x35680ec5; converted property
@property(assign) int displayTypeHint;	// G=0x353fa069; S=0x353f9fc1; converted property
@property(assign) CGRect frame;	// G=0x353f6b71; S=0x356801d9; converted property
@property(retain) id geometry;	// G=0x35680109; S=0x35680171; converted property
@property(assign) BOOL ghost;	// G=0x353fb3d1; S=0x356810d5; converted property
@property(assign) int interactionType;	// G=0x353fb8e9; S=0x35680f1d; converted property
@property(assign) BOOL isClientVariantOverride;	// G=0x353fce65; S=0x3568107d; converted property
@property(readonly, assign, nonatomic) BOOL modifiesKeyplane;	// G=0x354a2755; 
@property(retain, nonatomic) NSString *name;	// G=0x353f66bd; S=0x356816fd; @synthesize
@property(retain) id overrideDisplayString;	// G=0x353fcea9; S=0x353fb681; converted property
@property(assign) CGRect paddedFrame;	// G=0x353fbb4d; S=0x3568024d; converted property
@property(retain, nonatomic) NSMutableDictionary *properties;	// G=0x353f66ad; S=0x353f75ad; @synthesize
@property(assign) int rendering;	// G=0x353fc8cd; S=0x35681025; converted property
@property(retain) id representedString;	// G=0x353fd745; S=0x35424421; converted property
@property(retain) id shape;	// G=0x353f6c05; S=0x353f75d1; converted property
@property(assign) BOOL shouldSkipCandidateSelection;	// G=0x353fc989; S=0x35680d4d; converted property
@property(assign) int splitMode;	// G=0x3568122d; S=0x3568126d; converted property
@property(retain, nonatomic) NSMutableArray *subtrees;	// G=0x353f6501; S=0x35681721; @synthesize
@property(assign) int textAlignment;	// G=0x354172e5; S=0x35680fcd; converted property
@property(assign, nonatomic) int type;	// G=0x353f669d; S=0x356816ed; @synthesize
@property(retain) id variantPopupBias;	// G=0x35681185; S=0x3568112d; converted property
@property(assign) int variantType;	// G=0x35413e49; S=0x35680f75; converted property
@property(assign) BOOL visible;	// G=0x353fb329; S=0x353f8495; converted property
@property(assign) int visualStyle;	// G=0x353f60e9; S=0x353f63b5; converted property
+ (id)key;	// 0x3568160d
+ (id)keyboard;	// 0x3568167d
+ (id)stringForType:(int)type;	// 0x3567fcfd
+ (id)treeOfType:(int)type;	// 0x3567f309
+ (id)uniqueName;	// 0x3567efa5
- (id)initWithType:(int)type;	// 0x3567f21d
- (id)initWithType:(int)type withName:(id)name withProperties:(id)properties withSubtrees:(id)subtrees withCache:(id)cache;	// 0x353f4d55
- (int)_variantType;	// 0x35413e81
// declared property getter: - (BOOL)acceptsShiftLock;	// 0x354b16dd
- (id)alternateKeyplaneName;	// 0x35680d0d
- (id)attributeSet:(BOOL)set;	// 0x353f7431
- (BOOL)behavesAsShiftKey;	// 0x353fb8ad
- (BOOL)boolForProperty:(id)property;	// 0x353f66f1
// declared property getter: - (id)cache;	// 0x353f7951
- (id)cacheDisplayString;	// 0x35400e25
- (void)cacheKey:(id)key;	// 0x35680335
- (id)cachedKeysByKeyName:(id)name;	// 0x353f965d
// converted property getter: - (id)clientVariantActionName;	// 0x3541f11d
// converted property getter: - (id)clientVariantRepresentedString;	// 0x3541f0f1
- (id)componentName;	// 0x35424541
- (id)copyWithZone:(NSZone *)zone;	// 0x3567f3d9
- (void)dealloc;	// 0x3567f351
- (id)description;	// 0x3567fb29
// converted property getter: - (BOOL)disabled;	// 0x353faec9
// converted property getter: - (int)displayRowHint;	// 0x35400e6d
// converted property getter: - (id)displayString;	// 0x353fa2e9
// converted property getter: - (int)displayType;	// 0x353fae85
// converted property getter: - (int)displayTypeHint;	// 0x353fa069
- (id)firstCachedKeyWithName:(id)name;	// 0x353f7911
// converted property getter: - (CGRect)frame;	// 0x353f6b71
- (id)geometries;	// 0x35680695
// converted property getter: - (id)geometry;	// 0x35680109
- (id)geometrySet:(BOOL)set;	// 0x353f72b5
// converted property getter: - (BOOL)ghost;	// 0x353fb3d1
- (int)indexOfSubtree:(id)subtree;	// 0x3568008d
- (int)intForProperty:(id)property;	// 0x353f9f59
// converted property getter: - (int)interactionType;	// 0x353fb8e9
// converted property getter: - (BOOL)isClientVariantOverride;	// 0x353fce65
- (BOOL)isDuplicateOfTree:(id)tree;	// 0x3567f9b1
- (BOOL)isEqualToTree:(id)tree;	// 0x3567f955
- (BOOL)isHashed;	// 0x354237d5
- (BOOL)isLeafType;	// 0x356800d5
- (BOOL)isLetters;	// 0x35680dc9
- (BOOL)isSameAsTree:(id)tree;	// 0x3567f569
- (BOOL)isShiftKeyPlaneChooser;	// 0x353fdd89
- (BOOL)isShiftKeyplane;	// 0x353f66cd
- (id)keyAttributes;	// 0x35680861
- (id)keyForString:(id)string;	// 0x35680435
- (id)keySet;	// 0x353f71fd
- (id)keyplaneForKey:(id)key;	// 0x354a5ec5
- (id)keys;	// 0x353fd521
- (id)keysByKeyName:(id)name;	// 0x35680be1
- (id)keysOrderedByPosition;	// 0x35680bd1
- (id)keysOrderedByPositionWithoutZip;	// 0x353fddad
- (id)layoutName;	// 0x3540058d
- (BOOL)looksLike:(id)like;	// 0x354244d1
- (BOOL)looksLikeShiftAlternate;	// 0x353fa951
// declared property getter: - (BOOL)modifiesKeyplane;	// 0x354a2755
// declared property getter: - (id)name;	// 0x353f66bd
- (id)nameFromAttributes;	// 0x3567efe1
- (BOOL)notUseCandidateSelection;	// 0x353f692d
- (id)numberForProperty:(id)property;	// 0x353fade1
// converted property getter: - (id)overrideDisplayString;	// 0x353fcea9
// converted property getter: - (CGRect)paddedFrame;	// 0x353fbb4d
// declared property getter: - (id)properties;	// 0x353f66ad
- (id)recursiveDescription;	// 0x3567fc0d
- (void)removeClientVariantActionInfo;	// 0x353fb6d9
- (BOOL)renderAsStringKey;	// 0x353fb669
- (BOOL)renderAsStringKeyExcludingPunctuation:(BOOL)punctuation;	// 0x35681521
// converted property getter: - (int)rendering;	// 0x353fc8cd
// converted property getter: - (id)representedString;	// 0x353fd745
- (void)setAttributes:(id)attributes;	// 0x35680599
// declared property setter: - (void)setCache:(id)cache;	// 0x353f7601
// converted property setter: - (void)setClientVariantActionName:(id)name;	// 0x353fb765
// converted property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x353fb70d
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x356811b1
// converted property setter: - (void)setDisplayRowHint:(int)hint;	// 0x353fae0d
// converted property setter: - (void)setDisplayString:(id)string;	// 0x353f9e9d
// converted property setter: - (void)setDisplayType:(int)type;	// 0x35680ec5
// converted property setter: - (void)setDisplayTypeHint:(int)hint;	// 0x353f9fc1
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x356801d9
- (void)setFrameOnly:(CGRect)only;	// 0x356802c1
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x35680171
// converted property setter: - (void)setGhost:(BOOL)ghost;	// 0x356810d5
// converted property setter: - (void)setInteractionType:(int)type;	// 0x35680f1d
// converted property setter: - (void)setIsClientVariantOverride:(BOOL)override;	// 0x3568107d
// declared property setter: - (void)setName:(id)name;	// 0x356816fd
- (BOOL)setObject:(id)object forProperty:(id)property;	// 0x3567fad1
// converted property setter: - (void)setOverrideDisplayString:(id)string;	// 0x353fb681
// converted property setter: - (void)setPaddedFrame:(CGRect)frame;	// 0x3568024d
// declared property setter: - (void)setProperties:(id)properties;	// 0x353f75ad
// converted property setter: - (void)setRendering:(int)rendering;	// 0x35681025
// converted property setter: - (void)setRepresentedString:(id)string;	// 0x35424421
// converted property setter: - (void)setShape:(id)shape;	// 0x353f75d1
// converted property setter: - (void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;	// 0x35680d4d
// converted property setter: - (void)setSplitMode:(int)mode;	// 0x3568126d
// declared property setter: - (void)setSubtrees:(id)subtrees;	// 0x35681721
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x35680fcd
// declared property setter: - (void)setType:(int)type;	// 0x356816ed
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x3568112d
// converted property setter: - (void)setVariantType:(int)type;	// 0x35680f75
// converted property setter: - (void)setVisible:(BOOL)visible;	// 0x353f8495
// converted property setter: - (void)setVisualStyle:(int)style;	// 0x353f63b5
// converted property getter: - (id)shape;	// 0x353f6c05
- (id)shiftAlternateKeyplaneName;	// 0x353f6769
- (BOOL)shouldCacheKey;	// 0x356813fd
// converted property getter: - (BOOL)shouldSkipCandidateSelection;	// 0x353fc989
// converted property getter: - (int)splitMode;	// 0x3568122d
- (id)stringForProperty:(id)property;	// 0x353f67a9
- (id)subtreeAtIndexPath:(id)indexPath withPosition:(int)position;	// 0x3567fa19
- (id)subtreeWithName:(id)name;	// 0x353f67d5
- (id)subtreeWithName:(id)name rows:(id)rows;	// 0x3567fe49
- (id)subtreeWithType:(int)type;	// 0x3567fd99
// declared property getter: - (id)subtrees;	// 0x353f6501
- (BOOL)subtreesAreOrdered;	// 0x356800f1
- (id)subtreesWithProperty:(id)property value:(id)value;	// 0x3567ff79
- (BOOL)supportsType:(int)type;	// 0x353f6511
// converted property getter: - (int)textAlignment;	// 0x354172e5
// declared property getter: - (int)type;	// 0x353f669d
- (id)unhashedName;	// 0x3567f201
- (BOOL)usesAdaptiveKeys;	// 0x35680da5
- (BOOL)usesAutoShift;	// 0x35680ce9
- (BOOL)usesKeyCharging;	// 0x353fe319
- (id)variantDisplayString;	// 0x356812c1
// converted property getter: - (id)variantPopupBias;	// 0x35681185
// converted property getter: - (int)variantType;	// 0x35413e49
// converted property getter: - (BOOL)visible;	// 0x353fb329
// converted property getter: - (int)visualStyle;	// 0x353f60e9
- (void)zipGeometrySet;	// 0x353f6f15
@end
