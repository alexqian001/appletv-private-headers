/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDataClient.h"

@class NSString, ATVHSConnectionStream, NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface ATVHSDataClient : ATVDataClient {
	FPSAPContextOpaque_Ref _fpsapContext;	// 4 = 0x4
	ATVHSConnectionStream *_connectionStream;	// 8 = 0x8
	unsigned long long _pairingID;	// 12 = 0xc
	unsigned long long _machineID;	// 20 = 0x14
	unsigned long _sessionID;	// 28 = 0x1c
	NSString *_homeShareGroupID;	// 32 = 0x20
	NSURL *_serverURL;	// 36 = 0x24
	NSURL *_serverIPURL;	// 40 = 0x28
	int _serverPort;	// 44 = 0x2c
	NSString *_databaseName;	// 48 = 0x30
	unsigned long _databaseID;	// 52 = 0x34
	unsigned long long _databasePersistentID;	// 56 = 0x38
	unsigned long _dpapDatabaseID;	// 64 = 0x40
	unsigned long long _dpapDatabasePersistentID;	// 68 = 0x44
	unsigned long _basePlaylistID;	// 76 = 0x4c
	unsigned long long _basePlaylistPersistentID;	// 80 = 0x50
	unsigned short _daapProtocolMajorVersion;	// 88 = 0x58
	unsigned short _daapProtocolMinorVersion;	// 90 = 0x5a
	unsigned short _dpapProtocolMajorVersion;	// 92 = 0x5c
	unsigned short _dpapProtocolMinorVersion;	// 94 = 0x5e
	BOOL _enhancedClient;	// 96 = 0x60
	BOOL _supportsDRMTokenEncryption;	// 97 = 0x61
	unsigned long _databaseRevision;	// 100 = 0x64
	unsigned long _drmRevision;	// 104 = 0x68
	unsigned long _photoDBRevision;	// 108 = 0x6c
	BOOL _dpapImportInProgress;	// 112 = 0x70
	NSMutableDictionary *_artworkRequestMap;	// 116 = 0x74
}
@property(retain, nonatomic) NSMutableDictionary *artworkRequestMap;	// G=0xe4cdd; S=0xe4ced; @synthesize=_artworkRequestMap
@property(assign, nonatomic) unsigned long basePlaylistID;	// G=0xe4b51; S=0xe4b61; @synthesize=_basePlaylistID
@property(assign, nonatomic) unsigned long long basePlaylistPersistentID;	// G=0xe4b71; S=0xe4b89; @synthesize=_basePlaylistPersistentID
@property(assign, nonatomic) unsigned short daapProtocolMajorVersion;	// G=0xe4b9d; S=0xe4bad; @synthesize=_daapProtocolMajorVersion
@property(assign, nonatomic) unsigned short daapProtocolMinorVersion;	// G=0xe4bbd; S=0xe4bcd; @synthesize=_daapProtocolMinorVersion
@property(assign, nonatomic) unsigned long databaseID;	// G=0xe4ab9; S=0xe4ac9; @synthesize=_databaseID
@property(retain, nonatomic) NSString *databaseName;	// G=0xe4a99; S=0xe4aa9; @synthesize=_databaseName
@property(assign, nonatomic) unsigned long long databasePersistentID;	// G=0xe4ad9; S=0xe4af1; @synthesize=_databasePersistentID
@property(assign, nonatomic) unsigned long databaseRevision;	// G=0xe4c5d; S=0xe4c6d; @synthesize=_databaseRevision
@property(assign, nonatomic) unsigned long dpapDatabaseID;	// G=0xe4b05; S=0xe4b15; @synthesize=_dpapDatabaseID
@property(assign, nonatomic) unsigned long long dpapDatabasePersistentID;	// G=0xe4b25; S=0xe4b3d; @synthesize=_dpapDatabasePersistentID
@property(assign, nonatomic) BOOL dpapImportInProgress;	// G=0xe4cbd; S=0xe4ccd; @synthesize=_dpapImportInProgress
@property(assign, nonatomic) unsigned short dpapProtocolMajorVersion;	// G=0xe4bdd; S=0xe4bed; @synthesize=_dpapProtocolMajorVersion
@property(assign, nonatomic) unsigned short dpapProtocolMinorVersion;	// G=0xe4bfd; S=0xe4c0d; @synthesize=_dpapProtocolMinorVersion
@property(assign, nonatomic) unsigned long drmRevision;	// G=0xe4c7d; S=0xe4c8d; @synthesize=_drmRevision
@property(assign, nonatomic) BOOL enhancedClient;	// G=0xe4c1d; S=0xe4c2d; @synthesize=_enhancedClient
@property(retain, nonatomic) NSString *homeShareGroupID;	// G=0xe4a21; S=0xe4a31; @synthesize=_homeShareGroupID
@property(assign, nonatomic) unsigned long long machineID;	// G=0xe49d5; S=0xe49ed; @synthesize=_machineID
@property(assign, nonatomic) unsigned long long pairingID;	// G=0xe49a9; S=0xe49c1; @synthesize=_pairingID
@property(assign, nonatomic) unsigned long photoDBRevision;	// G=0xe4c9d; S=0xe4cad; @synthesize=_photoDBRevision
@property(copy) NSURL *serverIPURL;	// G=0xe4a55; S=0xe4a69; @synthesize=_serverIPURL
@property(assign, nonatomic) int serverPort;	// G=0xe4a79; S=0xe4a89; @synthesize=_serverPort
@property(copy, nonatomic) NSURL *serverURL;	// G=0xe4a41; S=0xe3ee9; @synthesize=_serverURL
@property(assign, nonatomic) unsigned long sessionID;	// G=0xe4a01; S=0xe4a11; @synthesize=_sessionID
@property(assign, nonatomic) BOOL supportsDRMTokenEncryption;	// G=0xe4c3d; S=0xe4c4d; @synthesize=_supportsDRMTokenEncryption
+ (id)hsDataClientWithServerURL:(id)serverURL serverName:(id)name hsGroupID:(id)anId machineID:(unsigned long long)anId4 pairingID:(unsigned long long)anId5 clientType:(unsigned long)type;	// 0xe3b99
- (id)initWithServerURL:(id)serverURL hsGroupID:(id)anId machineID:(unsigned long long)anId3 pairingID:(unsigned long long)anId4 clientName:(id)name clientType:(unsigned long)type;	// 0xe3c05
- (void)_dataClientConnectionHandler:(id)handler;	// 0xe48e1
- (void)artworkRequestCompletedForIdentifier:(id)identifier;	// 0xf410d
// declared property getter: - (id)artworkRequestMap;	// 0xe4cdd
// declared property getter: - (unsigned long)basePlaylistID;	// 0xe4b51
// declared property getter: - (unsigned long long)basePlaylistPersistentID;	// 0xe4b71
- (id)baseURL;	// 0xe40a5
- (id)browseRequestWithQuery:(id)query;	// 0xf1a5d
- (void)cancelArtworkRequestForIdentifier:(id)identifier;	// 0xf3ff9
- (void)cancelImageRequest:(id)request;	// 0xe46b1
- (void)concreteDataClientConnect;	// 0xe40d9
- (void)concreteDataClientDisconnect;	// 0xe4281
// declared property getter: - (unsigned short)daapProtocolMajorVersion;	// 0xe4b9d
// declared property getter: - (unsigned short)daapProtocolMinorVersion;	// 0xe4bbd
// declared property getter: - (unsigned long)databaseID;	// 0xe4ab9
// declared property getter: - (id)databaseName;	// 0xe4a99
// declared property getter: - (unsigned long long)databasePersistentID;	// 0xe4ad9
// declared property getter: - (unsigned long)databaseRevision;	// 0xe4c5d
- (void)dealloc;	// 0xe3d59
- (id)description;	// 0xe3ded
- (void)determineBasePlaylist;	// 0xec469
- (void)determineDAAPDatabase;	// 0xec061
- (void)determineDPAPDatabase;	// 0xec299
- (void)determineDPAPDatabaseOnUpdate;	// 0xedf31
- (void)determinePhotoDatabase;	// 0xee565
- (void)disconnectClient;	// 0xed4b5
// declared property getter: - (unsigned long)dpapDatabaseID;	// 0xe4b05
// declared property getter: - (unsigned long long)dpapDatabasePersistentID;	// 0xe4b25
// declared property getter: - (BOOL)dpapImportInProgress;	// 0xe4cbd
// declared property getter: - (unsigned short)dpapProtocolMajorVersion;	// 0xe4bdd
// declared property getter: - (unsigned short)dpapProtocolMinorVersion;	// 0xe4bfd
// declared property getter: - (unsigned long)drmRevision;	// 0xe4c7d
- (id)drmTokenRequestWithQuery:(id)query;	// 0xf152d
- (void)drmUpdate;	// 0xed559
// declared property getter: - (BOOL)enhancedClient;	// 0xe4c1d
- (BOOL)establishFairPlayContextWithServerFPVer:(unsigned long)serverFPVer;	// 0xeb695
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xe45a9
- (FPSAPContextOpaque_Ref)fairPlayContext;	// 0xe4095
- (BOOL)groupingSupportsProperty:(id)property;	// 0xe4529
- (id)groupsRequestWithQuery:(id)query;	// 0xf1bb5
- (void)handleDAAPQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0xf2115
- (void)handleDPAPQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0xf2bd9
- (unsigned)hash;	// 0xe3e71
// declared property getter: - (id)homeShareGroupID;	// 0xe4a21
- (void)homeShareVerify;	// 0xebbb9
- (void)iTunesDPAPDatabaseUpdate;	// 0xedc11
- (void)iTunesDatabaseUpdate;	// 0xed0d1
- (void)iTunesPhotoDatabaseUpdate;	// 0xed879
- (id)imageRequestWithAsset:(id)asset artworkIdentifier:(id)identifier requestedSize:(CGSize)size crop:(BOOL)crop withContext:(void *)context;	// 0xf36f1
- (id)imageRequestWithAsset:(id)asset imageID:(id)anId size:(CGSize)size crop:(BOOL)crop context:(id)context;	// 0xe467d
- (BOOL)isEqual:(id)equal;	// 0xe3e41
- (id)itemsRequestWithQuery:(id)query;	// 0xf0a6d
- (void)logErrorWithRequest:(id)request httpStatus:(long)status;	// 0xed079
- (void)loginToITunes;	// 0xeb321
- (void)loginToPhotoApp;	// 0xee249
// declared property getter: - (unsigned long long)machineID;	// 0xe49d5
- (void)machineVerify;	// 0xebe1d
- (void)mediaItemPropertyUpdateHandler:(id)handler;	// 0xf2745
- (id)networkTestURLWithOptions:(id)options headers:(id *)headers;	// 0xe46c9
// declared property getter: - (unsigned long long)pairingID;	// 0xe49a9
- (void)photoAppDatabaseUpdate;	// 0xee719
- (id)photoDBRequestWithQuery:(id)query;	// 0xf1d75
// declared property getter: - (unsigned long)photoDBRevision;	// 0xe4c9d
- (BOOL)photosShared;	// 0xe4039
- (id)playbackURLWithItemID:(unsigned long)itemID;	// 0xe3f95
- (id)playlistRequestWithQuery:(id)query;	// 0xf1f85
- (BOOL)processQueryAsync:(id)async;	// 0xe45a5
- (BOOL)queryFilterSupportsProperty:(id)property;	// 0xe44ad
- (id)rentalRequestWithQuery:(id)query;	// 0xf18b9
// declared property getter: - (id)serverIPURL;	// 0xe4a55
- (void)serverInfo;	// 0xec8b9
// declared property getter: - (int)serverPort;	// 0xe4a79
// declared property getter: - (id)serverURL;	// 0xe4a41
- (id)serverURLStr;	// 0xe3f6d
// declared property getter: - (unsigned long)sessionID;	// 0xe4a01
// declared property setter: - (void)setArtworkRequestMap:(id)map;	// 0xe4ced
// declared property setter: - (void)setBasePlaylistID:(unsigned long)anId;	// 0xe4b61
// declared property setter: - (void)setBasePlaylistPersistentID:(unsigned long long)anId;	// 0xe4b89
// declared property setter: - (void)setDaapProtocolMajorVersion:(unsigned short)version;	// 0xe4bad
// declared property setter: - (void)setDaapProtocolMinorVersion:(unsigned short)version;	// 0xe4bcd
// declared property setter: - (void)setDatabaseID:(unsigned long)anId;	// 0xe4ac9
// declared property setter: - (void)setDatabaseName:(id)name;	// 0xe4aa9
// declared property setter: - (void)setDatabasePersistentID:(unsigned long long)anId;	// 0xe4af1
// declared property setter: - (void)setDatabaseRevision:(unsigned long)revision;	// 0xe4c6d
- (BOOL)setDatabaseWithResponse:(id)response daapResponse:(BOOL)response2;	// 0xeccf5
// declared property setter: - (void)setDpapDatabaseID:(unsigned long)anId;	// 0xe4b15
// declared property setter: - (void)setDpapDatabasePersistentID:(unsigned long long)anId;	// 0xe4b3d
// declared property setter: - (void)setDpapImportInProgress:(BOOL)progress;	// 0xe4ccd
// declared property setter: - (void)setDpapProtocolMajorVersion:(unsigned short)version;	// 0xe4bed
// declared property setter: - (void)setDpapProtocolMinorVersion:(unsigned short)version;	// 0xe4c0d
// declared property setter: - (void)setDrmRevision:(unsigned long)revision;	// 0xe4c8d
// declared property setter: - (void)setEnhancedClient:(BOOL)client;	// 0xe4c2d
// declared property setter: - (void)setHomeShareGroupID:(id)anId;	// 0xe4a31
// declared property setter: - (void)setMachineID:(unsigned long long)anId;	// 0xe49ed
// declared property setter: - (void)setPairingID:(unsigned long long)anId;	// 0xe49c1
// declared property setter: - (void)setPhotoDBRevision:(unsigned long)revision;	// 0xe4cad
// declared property setter: - (void)setServerIPURL:(id)ipurl;	// 0xe4a69
// declared property setter: - (void)setServerPort:(int)port;	// 0xe4a89
// declared property setter: - (void)setServerURL:(id)url;	// 0xe3ee9
// declared property setter: - (void)setSessionID:(unsigned long)anId;	// 0xe4a11
// declared property setter: - (void)setSupportsDRMTokenEncryption:(BOOL)encryption;	// 0xe4c4d
- (void)submitPropertyUpdateQueryWithURLStr:(id)urlstr property:(id)property propertyValue:(unsigned long)value itemID:(id)anId;	// 0xf2a15
// declared property getter: - (BOOL)supportsDRMTokenEncryption;	// 0xe4c3d
- (BOOL)supportsProperty:(id)property;	// 0xe4479
@end

