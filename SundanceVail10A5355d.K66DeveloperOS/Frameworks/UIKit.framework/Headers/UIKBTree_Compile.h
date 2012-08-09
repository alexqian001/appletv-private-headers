/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKBTree.h"
#import "UIKit-Structs.h"

@class NSMutableDictionary, NSArray;

@interface UIKBTree_Compile : UIKBTree {
	NSMutableDictionary *symbols;	// 24 = 0x18
	NSMutableDictionary *refs;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSArray *refList;	// G=0x33d68069; 
@property(retain, nonatomic) NSMutableDictionary *refs;	// G=0x33d6819d; S=0x33d681ad; @synthesize
@property(retain, nonatomic) NSMutableDictionary *symbols;	// G=0x33d6817d; S=0x33d6818d; @synthesize
@property(assign, nonatomic) BOOL variable;	// G=0x33d680a1; S=0x33d680f9; 
+ (id)stringEnumForType:(int)type;	// 0x33d6636d
+ (id)treeOfType:(int)type;	// 0x33d65add
+ (int)typeForString:(id)string;	// 0x33d66409
+ (id)uniqueNameWithType:(int)type;	// 0x33d65711
- (id)initWithType:(int)type;	// 0x33d65a85
- (BOOL)_needsScaling;	// 0x33d68179
- (id)attributeSet:(BOOL)set;	// 0x33d67d75
- (id)copyWithZone:(NSZone *)zone;	// 0x33d65b25
- (id)geometrySet:(BOOL)set;	// 0x33d67a81
- (int)indexOfSubtreeWithName:(id)name rows:(id)rows;	// 0x33d66855
- (int)indexOfSubtreeWithType:(int)type;	// 0x33d667d5
- (BOOL)isSameAsTree:(id)tree;	// 0x33d65d3d
- (BOOL)isSymbolType;	// 0x33d66555
- (id)listAtIndex:(int)index;	// 0x33d66571
- (void)mergePropertiesWithOthers:(id)others;	// 0x33d66ad9
- (void)mergePropertiesWithSubtreeRange:(NSRange)subtreeRange properties:(id)properties;	// 0x33d66c29
- (void)mergeSubtreesWithOthers:(id)others;	// 0x33d6695d
- (void)mergeSymbolsWithOthers:(id)others;	// 0x33d66a45
// declared property getter: - (id)refList;	// 0x33d68069
// declared property getter: - (id)refs;	// 0x33d6819d
- (void)setAttributeSet:(id)set;	// 0x33d67f19
- (void)setGeometrySet:(id)set;	// 0x33d67c25
// declared property setter: - (void)setRefs:(id)refs;	// 0x33d681ad
// declared property setter: - (void)setSymbols:(id)symbols;	// 0x33d6818d
- (void)setTarget:(id)target forReference:(id)reference;	// 0x33d666e9
// declared property setter: - (void)setVariable:(BOOL)variable;	// 0x33d680f9
- (int)shapeHash;	// 0x33d6771d
- (id)simpleName;	// 0x33d65785
- (int)subtreeHash;	// 0x33d67955
- (int)symbolHash:(id)hash;	// 0x33d67379
- (id)symbolValues:(id)values withSymbols:(id)symbols;	// 0x33d67119
// declared property getter: - (id)symbols;	// 0x33d6817d
- (void)uniquifyName;	// 0x33d659d1
- (BOOL)usesSymbols;	// 0x33d66e61
// declared property getter: - (BOOL)variable;	// 0x33d680a1
@end
