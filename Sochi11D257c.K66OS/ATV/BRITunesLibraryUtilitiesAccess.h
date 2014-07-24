/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRITunesUtilities.h"
#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface BRITunesLibraryUtilitiesAccess : BRSingleton <BRITunesUtilities> {
	id<BRITunesUtilities> _utilitiesDelegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x471111
+ (id)singleton;	// 0x471101
- (void).cxx_destruct;	// 0x471395
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x471149
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x471175
- (void)deleteImportedKeybagData;	// 0x471375
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0x471235
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key fallbackSortSelector:(SEL)selector;	// 0x471195
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0x471279
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x471339
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0x4712f9
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0x4712d9
- (id)rentalGUID;	// 0x471319
- (void)setITunesUtilitiesDelegate:(id)delegate;	// 0x471135
- (id)sortStringForString:(id)string;	// 0x471259
- (id)urlSuitableForPlayback:(id)playback;	// 0x4712b9
@end
