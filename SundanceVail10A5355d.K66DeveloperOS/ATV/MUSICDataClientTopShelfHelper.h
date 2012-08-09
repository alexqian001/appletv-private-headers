/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataType, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MUSICDataClientTopShelfHelper : XXUnknownSuperclass {
	ATVDataQuery *_dateAddedQuery;	// 4 = 0x4
	ATVDataQuery *_datePlayedQuery;	// 8 = 0x8
	ATVDataQuery *_albumQuery;	// 12 = 0xc
	BOOL _queryResultsParseable;	// 16 = 0x10
	ATVDataType *_mediaType;	// 20 = 0x14
	long _numOfRentals;	// 24 = 0x18
	id _queryCompletionHandler;	// 28 = 0x1c
	id _albumQueryCompletionHandler;	// 32 = 0x20
}
@property(copy, nonatomic) id _albumQueryCompletionHandler;	// G=0x70555; S=0x70569; @synthesize
@property(copy, nonatomic) id _queryCompletionHandler;	// G=0x70531; S=0x70545; @synthesize
@property(readonly, assign, nonatomic) long numOfRentals;	// G=0x70521; @synthesize=_numOfRentals
- (void).cxx_destruct;	// 0x70579
- (void)_albumQueryComplete;	// 0x71295
// declared property getter: - (id)_albumQueryCompletionHandler;	// 0x70555
- (void)_cancelQueries;	// 0x71309
- (void)_itemsQueryComplete;	// 0x70c21
// declared property getter: - (id)_queryCompletionHandler;	// 0x70531
- (void)_submitHomeShareDateAddedQuery:(id)query mediaType:(id)type;	// 0x70965
- (void)_submitHomeShareDatePlayedQuery:(id)query mediaType:(id)type;	// 0x70add
- (void)dealloc;	// 0x70235
- (id)newBaseQuery:(id)query;	// 0x705fd
// declared property getter: - (long)numOfRentals;	// 0x70521
- (void)queryAlbumWithAlbumID:(id)albumID dataClient:(id)client completionHandler:(id)handler;	// 0x70375
- (void)queryDataWithMediaType:(id)mediaType dataClient:(id)client completionHandler:(id)handler;	// 0x7029d
// declared property setter: - (void)set_albumQueryCompletionHandler:(id)handler;	// 0x70569
// declared property setter: - (void)set_queryCompletionHandler:(id)handler;	// 0x70545
@end
