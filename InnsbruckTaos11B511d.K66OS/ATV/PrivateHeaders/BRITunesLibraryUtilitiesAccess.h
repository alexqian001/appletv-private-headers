/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "BRITunesUtilities.h"


__attribute__((visibility("hidden")))
@interface BRITunesLibraryUtilitiesAccess : BRSingleton <BRITunesUtilities> {
	id<BRITunesUtilities> _utilitiesDelegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x4572d1
+ (id)singleton;	// 0x4572c1
- (void).cxx_destruct;	// 0x457555
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x457309
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x457335
- (void)deleteImportedKeybagData;	// 0x457535
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0x4573f5
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key fallbackSortSelector:(SEL)selector;	// 0x457355
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0x457439
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x4574f9
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0x4574b9
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0x457499
- (id)rentalGUID;	// 0x4574d9
- (void)setITunesUtilitiesDelegate:(id)delegate;	// 0x4572f5
- (id)sortStringForString:(id)string;	// 0x457419
- (id)urlSuitableForPlayback:(id)playback;	// 0x457479
@end
