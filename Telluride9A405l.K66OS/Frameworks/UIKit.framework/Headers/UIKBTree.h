/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSMutableDictionary, NSMutableArray;

@interface UIKBTree : NSObject <NSCopying> {
	int type;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	NSMutableDictionary *properties;	// 12 = 0xc
	NSMutableArray *subtrees;	// 16 = 0x10
	NSMutableDictionary *cache;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL acceptsShiftLock;	// G=0x32e20d35; 
@property(retain, nonatomic) NSMutableDictionary *cache;	// G=0x32d6742d; S=0x32d670cd; @synthesize
@property(retain) id clientVariantActionName;	// G=0x32d8e759; S=0x32d6afdd; converted property
@property(retain) id clientVariantRepresentedString;	// G=0x32d8e72d; S=0x32d6af85; converted property
@property(assign) BOOL disabled;	// G=0x32d6a6dd; S=0x32fea921; converted property
@property(assign) int displayRowHint;	// G=0x32d7075d; S=0x32d6a621; converted property
@property(retain) id displayString;	// G=0x32d69b25; S=0x32d696d9; converted property
@property(assign) int displayType;	// G=0x32d6a699; S=0x32fea635; converted property
@property(assign) int displayTypeHint;	// G=0x32d698a5; S=0x32d697fd; converted property
@property(assign) CGRect frame;	// G=0x32d6663d; S=0x32fe9a45; converted property
@property(retain) id geometry;	// G=0x32fe9975; S=0x32fe99dd; converted property
@property(assign) BOOL ghost;	// G=0x32d6ac3d; S=0x32fea845; converted property
@property(assign) int interactionType;	// G=0x32d6b161; S=0x32fea68d; converted property
@property(assign) BOOL isClientVariantOverride;	// G=0x32d6c849; S=0x32fea7ed; converted property
@property(readonly, assign, nonatomic) BOOL modifiesKeyplane;	// G=0x32e11ee9; 
@property(retain, nonatomic) NSString *name;	// G=0x32d661a1; S=0x32fead81; @synthesize
@property(retain) id overrideDisplayString;	// G=0x32d6c88d; S=0x32d6aef9; converted property
@property(assign) CGRect paddedFrame;	// G=0x32d6b3e1; S=0x32fe9ab9; converted property
@property(retain, nonatomic) NSMutableDictionary *properties;	// G=0x32d66191; S=0x32d67079; @synthesize
@property(assign) int rendering;	// G=0x32d6c2b1; S=0x32fea795; converted property
@property(retain) id representedString;	// G=0x32d6d129; S=0x32d93a89; converted property
@property(retain) id shape;	// G=0x32d666d1; S=0x32d6709d; converted property
@property(assign) BOOL shouldSkipCandidateSelection;	// G=0x32d6c36d; S=0x32fea5b9; converted property
@property(assign) int splitMode;	// G=0x32fea99d; S=0x32fea9dd; converted property
@property(retain, nonatomic) NSMutableArray *subtrees;	// G=0x32d65fe5; S=0x32feada5; @synthesize
@property(assign) int textAlignment;	// G=0x32d86a89; S=0x32fea73d; converted property
@property(assign, nonatomic) int type;	// G=0x32d66181; S=0x32fead71; @synthesize
@property(retain) id variantPopupBias;	// G=0x32fea8f5; S=0x32fea89d; converted property
@property(assign) int variantType;	// G=0x32d836c5; S=0x32fea6e5; converted property
@property(assign) BOOL visible;	// G=0x32d6ab95; S=0x32d67cf9; converted property
@property(assign) int visualStyle;	// G=0x32d65bcd; S=0x32d65e99; converted property
+ (id)key;	// 0x32feac91
+ (id)keyboard;	// 0x32fead01
+ (id)stringForType:(int)type;	// 0x32fe9569
+ (id)treeOfType:(int)type;	// 0x32fe8b75
+ (id)uniqueName;	// 0x32fe8811
- (id)initWithType:(int)type;	// 0x32fe8a89
- (id)initWithType:(int)type withName:(id)name withProperties:(id)properties withSubtrees:(id)subtrees withCache:(id)cache;	// 0x32d647d9
- (int)_variantType;	// 0x32d836fd
// declared property getter: - (BOOL)acceptsShiftLock;	// 0x32e20d35
- (id)alternateKeyplaneName;	// 0x32fea579
- (id)attributeSet:(BOOL)set;	// 0x32d66efd
- (BOOL)behavesAsShiftKey;	// 0x32d6b125
- (BOOL)boolForProperty:(id)property;	// 0x32d661d5
// declared property getter: - (id)cache;	// 0x32d6742d
- (id)cacheDisplayString;	// 0x32d70715
- (void)cacheKey:(id)key;	// 0x32fe9ba1
- (id)cachedKeysByKeyName:(id)name;	// 0x32d68e99
// converted property getter: - (id)clientVariantActionName;	// 0x32d8e759
// converted property getter: - (id)clientVariantRepresentedString;	// 0x32d8e72d
- (id)componentName;	// 0x32d93ba9
- (id)copyWithZone:(NSZone *)zone;	// 0x32fe8c45
- (void)dealloc;	// 0x32fe8bbd
- (id)description;	// 0x32fe9395
// converted property getter: - (BOOL)disabled;	// 0x32d6a6dd
// converted property getter: - (int)displayRowHint;	// 0x32d7075d
// converted property getter: - (id)displayString;	// 0x32d69b25
// converted property getter: - (int)displayType;	// 0x32d6a699
// converted property getter: - (int)displayTypeHint;	// 0x32d698a5
- (id)firstCachedKeyWithName:(id)name;	// 0x32d673ed
// converted property getter: - (CGRect)frame;	// 0x32d6663d
- (id)geometries;	// 0x32fe9f01
// converted property getter: - (id)geometry;	// 0x32fe9975
- (id)geometrySet:(BOOL)set;	// 0x32d66d81
// converted property getter: - (BOOL)ghost;	// 0x32d6ac3d
- (int)indexOfSubtree:(id)subtree;	// 0x32fe98f9
- (int)intForProperty:(id)property;	// 0x32d69795
// converted property getter: - (int)interactionType;	// 0x32d6b161
// converted property getter: - (BOOL)isClientVariantOverride;	// 0x32d6c849
- (BOOL)isDuplicateOfTree:(id)tree;	// 0x32fe921d
- (BOOL)isEqualToTree:(id)tree;	// 0x32fe91c1
- (BOOL)isHashed;	// 0x32d92eb1
- (BOOL)isLeafType;	// 0x32fe9941
- (BOOL)isSameAsTree:(id)tree;	// 0x32fe8dd5
- (BOOL)isShiftKeyPlaneChooser;	// 0x32d6d76d
- (BOOL)isShiftKeyplane;	// 0x32d661b1
- (id)keyAttributes;	// 0x32fea0cd
- (id)keyForString:(id)string;	// 0x32fe9ca1
- (id)keySet;	// 0x32d66cc9
- (id)keyplaneForKey:(id)key;	// 0x32e15659
- (id)keys;	// 0x32d6cf05
- (id)keysByKeyName:(id)name;	// 0x32fea44d
- (id)keysOrderedByPosition;	// 0x32fea43d
- (id)keysOrderedByPositionWithoutZip;	// 0x32d6d791
- (id)layoutName;	// 0x32d6ff39
- (BOOL)looksLike:(id)like;	// 0x32d93b39
- (BOOL)looksLikeShiftAlternate;	// 0x32d6a165
// declared property getter: - (BOOL)modifiesKeyplane;	// 0x32e11ee9
// declared property getter: - (id)name;	// 0x32d661a1
- (id)nameFromAttributes;	// 0x32fe884d
- (BOOL)notUseCandidateSelection;	// 0x32d66411
- (id)numberForProperty:(id)property;	// 0x32d6a5f5
// converted property getter: - (id)overrideDisplayString;	// 0x32d6c88d
// converted property getter: - (CGRect)paddedFrame;	// 0x32d6b3e1
// declared property getter: - (id)properties;	// 0x32d66191
- (id)recursiveDescription;	// 0x32fe9479
- (void)removeClientVariantActionInfo;	// 0x32d6af51
- (BOOL)renderAsStringKey;	// 0x32d6aeb1
// converted property getter: - (int)rendering;	// 0x32d6c2b1
// converted property getter: - (id)representedString;	// 0x32d6d129
- (void)setAttributes:(id)attributes;	// 0x32fe9e05
// declared property setter: - (void)setCache:(id)cache;	// 0x32d670cd
// converted property setter: - (void)setClientVariantActionName:(id)name;	// 0x32d6afdd
// converted property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x32d6af85
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x32fea921
// converted property setter: - (void)setDisplayRowHint:(int)hint;	// 0x32d6a621
// converted property setter: - (void)setDisplayString:(id)string;	// 0x32d696d9
// converted property setter: - (void)setDisplayType:(int)type;	// 0x32fea635
// converted property setter: - (void)setDisplayTypeHint:(int)hint;	// 0x32d697fd
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x32fe9a45
- (void)setFrameOnly:(CGRect)only;	// 0x32fe9b2d
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x32fe99dd
// converted property setter: - (void)setGhost:(BOOL)ghost;	// 0x32fea845
// converted property setter: - (void)setInteractionType:(int)type;	// 0x32fea68d
// converted property setter: - (void)setIsClientVariantOverride:(BOOL)override;	// 0x32fea7ed
// declared property setter: - (void)setName:(id)name;	// 0x32fead81
- (BOOL)setObject:(id)object forProperty:(id)property;	// 0x32fe933d
// converted property setter: - (void)setOverrideDisplayString:(id)string;	// 0x32d6aef9
// converted property setter: - (void)setPaddedFrame:(CGRect)frame;	// 0x32fe9ab9
// declared property setter: - (void)setProperties:(id)properties;	// 0x32d67079
// converted property setter: - (void)setRendering:(int)rendering;	// 0x32fea795
// converted property setter: - (void)setRepresentedString:(id)string;	// 0x32d93a89
// converted property setter: - (void)setShape:(id)shape;	// 0x32d6709d
// converted property setter: - (void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;	// 0x32fea5b9
// converted property setter: - (void)setSplitMode:(int)mode;	// 0x32fea9dd
// declared property setter: - (void)setSubtrees:(id)subtrees;	// 0x32feada5
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x32fea73d
// declared property setter: - (void)setType:(int)type;	// 0x32fead71
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x32fea89d
// converted property setter: - (void)setVariantType:(int)type;	// 0x32fea6e5
// converted property setter: - (void)setVisible:(BOOL)visible;	// 0x32d67cf9
// converted property setter: - (void)setVisualStyle:(int)style;	// 0x32d65e99
// converted property getter: - (id)shape;	// 0x32d666d1
- (id)shiftAlternateKeyplaneName;	// 0x32d6624d
- (BOOL)shouldCacheKey;	// 0x32feab6d
// converted property getter: - (BOOL)shouldSkipCandidateSelection;	// 0x32d6c36d
// converted property getter: - (int)splitMode;	// 0x32fea99d
- (id)stringForProperty:(id)property;	// 0x32d6628d
- (id)subtreeAtIndexPath:(id)indexPath withPosition:(int)position;	// 0x32fe9285
- (id)subtreeWithName:(id)name;	// 0x32d662b9
- (id)subtreeWithName:(id)name rows:(id)rows;	// 0x32fe96b5
- (id)subtreeWithType:(int)type;	// 0x32fe9605
// declared property getter: - (id)subtrees;	// 0x32d65fe5
- (BOOL)subtreesAreOrdered;	// 0x32fe995d
- (id)subtreesWithProperty:(id)property value:(id)value;	// 0x32fe97e5
- (BOOL)supportsType:(int)type;	// 0x32d65ff5
// converted property getter: - (int)textAlignment;	// 0x32d86a89
// declared property getter: - (int)type;	// 0x32d66181
- (id)unhashedName;	// 0x32fe8a6d
- (BOOL)usesAdaptiveKeys;	// 0x32fea611
- (BOOL)usesAutoShift;	// 0x32fea555
- (BOOL)usesKeyCharging;	// 0x32d6dcd1
- (id)variantDisplayString;	// 0x32feaa31
// converted property getter: - (id)variantPopupBias;	// 0x32fea8f5
// converted property getter: - (int)variantType;	// 0x32d836c5
// converted property getter: - (BOOL)visible;	// 0x32d6ab95
// converted property getter: - (int)visualStyle;	// 0x32d65bcd
- (void)zipGeometrySet;	// 0x32d669e1
@end

