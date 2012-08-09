/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSIndexPath;

@interface UICollectionViewUpdateItem : NSObject {
	NSIndexPath *_initialIndexPath;	// 4 = 0x4
	NSIndexPath *_finalIndexPath;	// 8 = 0x8
	int _updateAction;	// 12 = 0xc
	id _gap;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSIndexPath *indexPathAfterUpdate;	// G=0x33df89f1; @synthesize=_finalIndexPath
@property(readonly, assign, nonatomic) NSIndexPath *indexPathBeforeUpdate;	// G=0x33df89e1; @synthesize=_initialIndexPath
@property(readonly, assign, nonatomic) int updateAction;	// G=0x33df8a01; @synthesize=_updateAction
- (id)initWithAction:(int)action forIndexPath:(id)indexPath;	// 0x33df86f5
- (id)initWithInitialIndexPath:(id)initialIndexPath finalIndexPath:(id)path updateAction:(int)action;	// 0x33df8669
- (id)initWithOldIndexPath:(id)oldIndexPath newIndexPath:(id)path;	// 0x33df8725
- (int)_action;	// 0x33df88d5
- (id)_gap;	// 0x33df8915
- (id)_indexPath;	// 0x33df88e5
- (BOOL)_isSectionOperation;	// 0x33df8935
- (id)_newIndexPath;	// 0x33df87ad
- (void)_setGap:(id)gap;	// 0x33df8925
- (void)_setNewIndexPath:(id)path;	// 0x33df87e5
- (int)compareIndexPaths:(id)paths;	// 0x33df8969
- (void)dealloc;	// 0x33df8749
- (id)description;	// 0x33df8829
// declared property getter: - (id)indexPathAfterUpdate;	// 0x33df89f1
// declared property getter: - (id)indexPathBeforeUpdate;	// 0x33df89e1
- (int)inverseCompareIndexPaths:(id)paths;	// 0x33df89a5
// declared property getter: - (int)updateAction;	// 0x33df8a01
@end
