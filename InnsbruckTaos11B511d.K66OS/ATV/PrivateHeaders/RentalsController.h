/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"


__attribute__((visibility("hidden")))
@interface RentalsController : BRDataQueryController {
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x2ba9c9
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x2baec9
- (id)errorForNoContent;	// 0x2bae21
- (id)indexPathForDataItem:(void *)dataItem;	// 0x2bae41
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2bb465
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x2bbd01
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2bbc09
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2bb419
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2baf71
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2bb429
- (id)newDataQuery;	// 0x2baa39
- (long)numberOfSectionsInList:(id)list;	// 0x2bb425
@end
