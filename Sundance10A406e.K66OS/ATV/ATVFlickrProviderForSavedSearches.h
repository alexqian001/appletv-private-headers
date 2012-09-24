/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFlickrProvider.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForSavedSearches : ATVFlickrProvider {
	NSMutableArray *_savedSearchCollections;	// 24 = 0x18
}
+ (id)providerOfSavedSearchCollections;	// 0x1ae4b9
- (id)init;	// 0x1ae4f1
- (id)_data;	// 0x1ae865
- (BOOL)_handlesObject:(id)object;	// 0x1ae875
- (void)_newSavedSearchToAddCollectionFor:(id)aFor;	// 0x1ae95d
- (void)_savedSearchTermRemoved:(id)removed;	// 0x1aea79
- (void)dealloc;	// 0x1ae749
- (id)hashForDataAtIndex:(long)index;	// 0x1ae809
@end
