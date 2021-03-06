/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@protocol BRMediaCollection;

@interface BRMediaCollectionEditor : NSObject {
@private
	id<BRMediaCollection> _collection;	// 4 = 0x4
}
+ (id)editorForCollection:(id)collection;	// 0x331d64bd
+ (void)setImplementationClass:(Class)aClass;	// 0x331d6409
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x331d6419
- (void)addMediaObjectToCollection:(id)collection;	// 0x331d6509
- (void)clearCollection;	// 0x331d6511
- (id)collection;	// 0x331d6515
- (id)collectionCopyWithName:(id)name;	// 0x331d6505
- (void)dealloc;	// 0x331d6471
- (void)removeMediaObjectFromCollection:(id)collection;	// 0x331d650d
@end

