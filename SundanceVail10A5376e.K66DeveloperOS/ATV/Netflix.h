/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BuiltinConfig, NSMutableDictionary, PeriodicWorkerThread, NSLock, NSArray, NSError, NSString, NSMutableArray, NSDictionary, NetflixNrdObjectCallback;
@protocol NetflixConfigProtocol, NSObject;

@interface Netflix : XXUnknownSuperclass {
	int runtimeState_;	// 4 = 0x4
	BOOL deferredStop_;	// 8 = 0x8
	BOOL nfhlsProtocol_;	// 9 = 0x9
	BOOL testEnv_;	// 10 = 0xa
	int nrdLogLevel_;	// 12 = 0xc
	Class customNetflixConfigClass_;	// 16 = 0x10
	NSString *version_;	// 20 = 0x14
	NSString *deviceModel_;	// 24 = 0x18
	NSString *udid_;	// 28 = 0x1c
	NSString *hashedUdid_;	// 32 = 0x20
	NSString *esnPrefix_;	// 36 = 0x24
	NSString *esn_;	// 40 = 0x28
	int targetType_;	// 44 = 0x2c
	BOOL appleTV_;	// 48 = 0x30
	BOOL gettingDeviceTokens_;	// 49 = 0x31
	NSLock *gettingDeviceTokensLock_;	// 52 = 0x34
	NSString *uuidStartTime_;	// 56 = 0x38
	NSString *applicationName_;	// 60 = 0x3c
	NSString *hostName_;	// 64 = 0x40
	NSString *deviceLanguage_;	// 68 = 0x44
	NSArray *userAccountPreferredLanguages_;	// 72 = 0x48
	NSLock *scheduledPreferredLanguagesLock_;	// 76 = 0x4c
	BOOL scheduledPreferredLanguages_;	// 80 = 0x50
	NSString *preferredLanguagesForApi_;	// 84 = 0x54
	BOOL preferredLanguagesSuccess_;	// 88 = 0x58
	NSString *didLoginRequiredNotificationName_;	// 92 = 0x5c
	NSString *didFailLoginRequiredNotificationName_;	// 96 = 0x60
	NSString *swUpgradedFromVersion_;	// 100 = 0x64
	NSString *geolocation_;	// 104 = 0x68
	NSString *geolocationCountry_;	// 108 = 0x6c
	NSString *geolocationStatus_;	// 112 = 0x70
	NSString *geolocationLanguage_;	// 116 = 0x74
	NSString *geolocationLocale_;	// 120 = 0x78
	NSString *userAgentApplicationName_;	// 124 = 0x7c
	NSString *userAgentApplicationVersion_;	// 128 = 0x80
	NSMutableArray *userAgentApplicationComments_;	// 132 = 0x84
	NSString *softwareVersion_;	// 136 = 0x88
	NSMutableArray *accounts_;	// 140 = 0x8c
	NSMutableDictionary *parameterItems_;	// 144 = 0x90
	NSMutableDictionary *configurationItems_;	// 148 = 0x94
	NSString *apiServerHostname_;	// 152 = 0x98
	NSString *configServerUrl_;	// 156 = 0x9c
	NSString *apiVersion_;	// 160 = 0xa0
	NSString *defaultUiBootUrl_;	// 164 = 0xa4
	NSString *defaultGenericFeedUrl_;	// 168 = 0xa8
	NSString *nccpServerUrl_;	// 172 = 0xac
	NSString *genericFeedUrl_;	// 176 = 0xb0
	NSString *uiBootUrl_;	// 180 = 0xb4
	double periodicWorkerTimeInterval_;	// 184 = 0xb8
	PeriodicWorkerThread *periodicWorkerThread_;	// 192 = 0xc0
	double reconfigureTimeInterval_;	// 196 = 0xc4
	BOOL nrdpStartCompleted_;	// 204 = 0xcc
	NSError *nrdpStartError_;	// 208 = 0xd0
	BOOL initialConfigurationCompleted_;	// 212 = 0xd4
	BOOL loginRequiredAllowedForStartup_;	// 213 = 0xd5
	BOOL initialLoginRequiredCompleted_;	// 214 = 0xd6
	BOOL iosSWUpdateCompleted_;	// 215 = 0xd7
	NSError *initialLoginRequiredError_;	// 216 = 0xd8
	NSError *configError_;	// 220 = 0xdc
	BuiltinConfig *builtinConfig_;	// 224 = 0xe0
	id<NSObject, NetflixConfigProtocol> customConfig_;	// 228 = 0xe4
	NSString *netflixIdKey_;	// 232 = 0xe8
	NSString *netflixIdValue_;	// 236 = 0xec
	NSString *secureNetflixIdKey_;	// 240 = 0xf0
	NSString *secureNetflixIdValue_;	// 244 = 0xf4
	NSString *userEmail_;	// 248 = 0xf8
	NSString *userPassword_;	// 252 = 0xfc
	NSString *userId_;	// 256 = 0x100
	NetflixNrdObjectCallback *validateDeviceCallback_;	// 260 = 0x104
	BOOL cookiesDirty_;	// 264 = 0x108
	NSLock *pingLock_;	// 268 = 0x10c
	NSLock *loginLock_;	// 272 = 0x110
	BOOL loginProcessing_;	// 276 = 0x114
	NSString *masterM3u8Prefix_;	// 280 = 0x118
	BOOL intBasedM3u8_;	// 284 = 0x11c
	int pinnedCdnId_;	// 288 = 0x120
	BOOL supportUnmuxedStreams_;	// 292 = 0x124
	NSString *localhost_;	// 296 = 0x128
	int localhostPort_;	// 300 = 0x12c
	NSString *dataDirectory_;	// 304 = 0x130
	bool factoryReset_;	// 308 = 0x134
	ConsoleSink *consoleSink_;	// 312 = 0x138
	NrdLib *nrdLib_;	// 316 = 0x13c
	NBPApplication *nbp_;	// 320 = 0x140
	BOOL userForciblyLoggedOut_;	// 324 = 0x144
	BOOL isTerminating_;	// 325 = 0x145
}
@property(copy) NSMutableArray *accounts;	// G=0x4692ad; S=0x4692c1; @synthesize=accounts_
@property(copy, nonatomic) NSString *apiServerHostname;	// G=0x469319; S=0x46932d; @synthesize=apiServerHostname_
@property(copy, nonatomic) NSString *apiServerHostname;	// @dynamic
@property(readonly, assign, nonatomic) NSString *apiUUID;	// G=0x467495; 
@property(readonly, assign, nonatomic) NSString *apiUUID;	// @dynamic
@property(copy, nonatomic) NSString *apiVersion;	// G=0x469361; S=0x469375; @synthesize=apiVersion_
@property(readonly, assign, nonatomic) NSString *apiVersion;	// @dynamic
@property(assign) BOOL appleTV;	// G=0x468f51; S=0x468f69; @synthesize=appleTV_
@property(copy, nonatomic) NSString *applicationName;	// G=0x468ff9; S=0x46900d; @synthesize=applicationName_
@property(copy, nonatomic) NSString *applicationName;	// @dynamic
@property(retain) BuiltinConfig *builtinConfig;	// G=0x469615; S=0x469629; @synthesize=builtinConfig_
@property(retain) BuiltinConfig *builtinConfig;	// @dynamic
@property(readonly, assign, nonatomic) unsigned certificationVersion;	// G=0x467985; @dynamic
@property(retain) NSError *configError;	// G=0x4695f1; S=0x469605; @synthesize=configError_
@property(retain) NSError *configError;	// @dynamic
@property(copy, nonatomic) NSString *configServerUrl;	// G=0x46933d; S=0x469351; @synthesize=configServerUrl_
@property(copy, nonatomic) NSString *configServerUrl;	// @dynamic
@property(copy) NSMutableDictionary *configurationItems;	// G=0x4692f5; S=0x469309; @synthesize=configurationItems_
@property(assign) ConsoleSink *consoleSink;	// G=0x469931; S=0x469945; @synthesize=consoleSink_
@property(readonly, assign, nonatomic) NSDictionary *contentProfiles;	// G=0x4676e1; @dynamic
@property(assign) BOOL cookiesDirty;	// @dynamic
@property(assign) BOOL cookiesDirty;	// G=0x46977d; S=0x469795; @synthesize=cookiesDirty_
@property(retain) id<NSObject, NetflixConfigProtocol> customConfig;	// @dynamic
@property(retain) id<NSObject, NetflixConfigProtocol> customConfig;	// G=0x469639; S=0x46964d; @synthesize=customConfig_
@property(retain) Class customNetflixConfigClass;	// G=0x468e35; S=0x468e49; @synthesize=customNetflixConfigClass_
@property(copy, nonatomic) NSString *dataDirectory;	// G=0x4698e9; S=0x4698fd; @synthesize=dataDirectory_
@property(readonly, assign, nonatomic) NSString *dataDirectory;	// @dynamic
@property(copy, nonatomic) NSString *defaultGenericFeedUrl;	// G=0x4693a9; S=0x4693bd; @synthesize=defaultGenericFeedUrl_
@property(readonly, assign, nonatomic) NSString *defaultGenericFeedUrl;	// @dynamic
@property(readonly, assign, nonatomic) NSString *defaultUiBootUrl;	// @dynamic
@property(copy, nonatomic) NSString *defaultUiBootUrl;	// G=0x469385; S=0x469399; @synthesize=defaultUiBootUrl_
@property(assign) BOOL deferredStop;	// G=0x468de5; S=0x468dfd; @synthesize=deferredStop_
@property(copy, nonatomic) NSString *deviceLanguage;	// G=0x469041; S=0x467989; @synthesize=deviceLanguage_
@property(readonly, assign, nonatomic) NSString *deviceLanguage;	// @dynamic
@property(copy, nonatomic) NSString *deviceModel;	// G=0x468e7d; S=0x468e91; @synthesize=deviceModel_
@property(copy, nonatomic) NSString *didFailLoginRequiredNotificationName;	// G=0x469135; S=0x469149; @synthesize=didFailLoginRequiredNotificationName_
@property(readonly, assign, nonatomic) NSString *didFailLoginRequiredNotificationName;	// @dynamic
@property(readonly, assign, nonatomic) NSString *didLoginRequiredNotificationName;	// @dynamic
@property(copy, nonatomic) NSString *didLoginRequiredNotificationName;	// G=0x469111; S=0x469125; @synthesize=didLoginRequiredNotificationName_
@property(copy, nonatomic) NSString *esn;	// G=0x468f0d; S=0x468f21; @synthesize=esn_
@property(readonly, assign, nonatomic) NSString *esnPrefix;	// @dynamic
@property(copy, nonatomic) NSString *esnPrefix;	// G=0x468ee9; S=0x468efd; @synthesize=esnPrefix_
@property(assign, nonatomic) bool factoryReset;	// G=0x46990d; S=0x469921; @synthesize=factoryReset_
@property(copy) NSString *genericFeedUrl;	// @dynamic
@property(copy) NSString *genericFeedUrl;	// G=0x4693cd; S=0x4693e1; @synthesize=genericFeedUrl_
@property(copy, nonatomic) NSString *geolocation;	// @dynamic
@property(copy, nonatomic) NSString *geolocation;	// G=0x46917d; S=0x469191; @synthesize=geolocation_
@property(copy, nonatomic) NSString *geolocationCountry;	// @dynamic
@property(copy, nonatomic) NSString *geolocationCountry;	// G=0x4691a1; S=0x4691b5; @synthesize=geolocationCountry_
@property(copy, nonatomic) NSString *geolocationLanguage;	// @dynamic
@property(copy, nonatomic) NSString *geolocationLanguage;	// G=0x4691e9; S=0x4679fd; @synthesize=geolocationLanguage_
@property(copy, nonatomic) NSString *geolocationLocale;	// @dynamic
@property(copy, nonatomic) NSString *geolocationLocale;	// G=0x4691fd; S=0x469211; @synthesize=geolocationLocale_
@property(copy, nonatomic) NSString *geolocationStatus;	// @dynamic
@property(copy, nonatomic) NSString *geolocationStatus;	// G=0x4691c5; S=0x4691d9; @synthesize=geolocationStatus_
@property(assign) BOOL gettingDeviceTokens;	// G=0x468f81; S=0x468f99; @synthesize=gettingDeviceTokens_
@property(assign) BOOL gettingDeviceTokens;	// @dynamic
@property(retain) NSLock *gettingDeviceTokensLock;	// @dynamic
@property(retain) NSLock *gettingDeviceTokensLock;	// G=0x468fb1; S=0x468fc5; @synthesize=gettingDeviceTokensLock_
@property(copy, nonatomic) NSString *hashedUdid;	// G=0x468ec5; S=0x468ed9; @synthesize=hashedUdid_
@property(readonly, assign, nonatomic) NSString *hashedUdid;	// @dynamic
@property(copy, nonatomic) NSString *hostName;	// G=0x46901d; S=0x469031; @synthesize=hostName_
@property(assign) BOOL initialConfigurationCompleted;	// G=0x46950d; S=0x469525; @synthesize=initialConfigurationCompleted_
@property(assign) BOOL initialLoginRequiredCompleted;	// G=0x46956d; S=0x469585; @synthesize=initialLoginRequiredCompleted_
@property(retain) NSError *initialLoginRequiredError;	// G=0x4695cd; S=0x4695e1; @synthesize=initialLoginRequiredError_
@property(assign, nonatomic) BOOL intBasedM3u8;	// G=0x469849; S=0x469859; @synthesize=intBasedM3u8_
@property(readonly, assign, nonatomic) BOOL intBasedM3u8;	// @dynamic
@property(assign) BOOL iosSWUpdateCompleted;	// G=0x46959d; S=0x4695b5; @synthesize=iosSWUpdateCompleted_
@property(readonly, assign) BOOL isTerminating;	// G=0x4699e5; @synthesize=isTerminating_
@property(retain, nonatomic) NSString *localhost;	// G=0x4698a9; S=0x4698b9; @synthesize=localhost_
@property(readonly, assign, nonatomic) NSString *localhost;	// @dynamic
@property(readonly, assign, nonatomic) int localhostPort;	// @dynamic
@property(assign, nonatomic) int localhostPort;	// G=0x4698c9; S=0x4698d9; @synthesize=localhostPort_
@property(retain) NSLock *loginLock;	// @dynamic
@property(retain) NSLock *loginLock;	// G=0x4697d1; S=0x4697e5; @synthesize=loginLock_
@property(assign) BOOL loginProcessing;	// @dynamic
@property(assign) BOOL loginProcessing;	// G=0x4697f5; S=0x46980d; @synthesize=loginProcessing_
@property(assign) BOOL loginRequiredAllowedForStartup;	// G=0x46953d; S=0x469555; @synthesize=loginRequiredAllowedForStartup_
@property(readonly, assign) BOOL loginRequiredAllowedForStartup;	// @dynamic
@property(readonly, assign, nonatomic) NSString *masterM3u8Prefix;	// @dynamic
@property(copy, nonatomic) NSString *masterM3u8Prefix;	// G=0x469825; S=0x469839; @synthesize=masterM3u8Prefix_
@property(assign) NBPApplication *nbp;	// G=0x469989; S=0x46999d; @synthesize=nbp_
@property(copy, nonatomic) NSString *nccpServerUrl;	// G=0x467d91; S=0x467e75; @synthesize=nccpServerUrl_
@property(copy, nonatomic) NSString *nccpServerUrl;	// @dynamic
@property(copy) NSString *netflixIdKey;	// G=0x46965d; S=0x469671; @synthesize=netflixIdKey_
@property(copy) NSString *netflixIdKey;	// @dynamic
@property(copy) NSString *netflixIdValue;	// G=0x469681; S=0x469695; @synthesize=netflixIdValue_
@property(copy) NSString *netflixIdValue;	// @dynamic
@property(assign, nonatomic) BOOL nfhlsProtocol;	// G=0x468e15; S=0x4675c1; @synthesize=nfhlsProtocol_
@property(readonly, assign) NrdLib *nrdLib;	// @dynamic
@property(assign) NrdLib *nrdLib;	// G=0x46995d; S=0x469971; @synthesize=nrdLib_
@property(assign, nonatomic) int nrdLogLevel;	// G=0x468e25; S=0x468d21; @synthesize=nrdLogLevel_
@property(assign) BOOL nrdpStartCompleted;	// G=0x4694b9; S=0x4694d1; @synthesize=nrdpStartCompleted_
@property(retain) NSError *nrdpStartError;	// G=0x4694e9; S=0x4694fd; @synthesize=nrdpStartError_
@property(copy) NSMutableDictionary *parameterItems;	// G=0x4692d1; S=0x4692e5; @synthesize=parameterItems_
@property(readonly, assign) PeriodicWorkerThread *periodicWorkerThread;	// @dynamic
@property(retain) PeriodicWorkerThread *periodicWorkerThread;	// G=0x46942d; S=0x469441; @synthesize=periodicWorkerThread_
@property(readonly, assign, nonatomic) double periodicWorkerTimeInterval;	// @dynamic
@property(assign, nonatomic) double periodicWorkerTimeInterval;	// G=0x469415; S=0x46769d; @synthesize=periodicWorkerTimeInterval_
@property(retain) NSLock *pingLock;	// @dynamic
@property(retain) NSLock *pingLock;	// G=0x4697ad; S=0x4697c1; @synthesize=pingLock_
@property(assign, nonatomic) int pinnedCdnId;	// G=0x469869; S=0x469879; @synthesize=pinnedCdnId_
@property(readonly, assign, nonatomic) int pinnedCdnId;	// @dynamic
@property(copy) NSString *preferredLanguagesForApi;	// G=0x4690bd; S=0x4690d1; @synthesize=preferredLanguagesForApi_
@property(copy) NSString *preferredLanguagesForApi;	// @dynamic
@property(assign) BOOL preferredLanguagesSuccess;	// @dynamic
@property(assign) BOOL preferredLanguagesSuccess;	// G=0x4690e1; S=0x4690f9; @synthesize=preferredLanguagesSuccess_
@property(assign) double reconfigureTimeInterval;	// G=0x469451; S=0x469485; @synthesize=reconfigureTimeInterval_
@property(assign) double reconfigureTimeInterval;	// @dynamic
@property(readonly, assign, nonatomic) NSDictionary *reportablePlaybackActionId;	// G=0x46b939; 
@property(assign) int runtimeState;	// G=0x468db9; S=0x468dcd; @synthesize=runtimeState_
@property(assign) BOOL scheduledPreferredLanguages;	// @dynamic
@property(assign) BOOL scheduledPreferredLanguages;	// G=0x46908d; S=0x4690a5; @synthesize=scheduledPreferredLanguages_
@property(retain) NSLock *scheduledPreferredLanguagesLock;	// G=0x469069; S=0x46907d; @synthesize=scheduledPreferredLanguagesLock_
@property(retain) NSLock *scheduledPreferredLanguagesLock;	// @dynamic
@property(copy) NSString *secureNetflixIdKey;	// @dynamic
@property(copy) NSString *secureNetflixIdKey;	// G=0x4696a5; S=0x4696b9; @synthesize=secureNetflixIdKey_
@property(copy) NSString *secureNetflixIdValue;	// @dynamic
@property(copy) NSString *secureNetflixIdValue;	// G=0x4696c9; S=0x4696dd; @synthesize=secureNetflixIdValue_
@property(copy, nonatomic) NSString *softwareVersion;	// G=0x469289; S=0x46929d; @synthesize=softwareVersion_
@property(readonly, assign, nonatomic) NSString *softwareVersion;	// @dynamic
@property(readonly, assign, nonatomic) BOOL supportUnmuxedStreams;	// @dynamic
@property(assign, nonatomic) BOOL supportUnmuxedStreams;	// G=0x469889; S=0x469899; @synthesize=supportUnmuxedStreams_
@property(copy, nonatomic) NSString *swUpgradedFromVersion;	// @dynamic
@property(copy, nonatomic) NSString *swUpgradedFromVersion;	// G=0x469159; S=0x46916d; @synthesize=swUpgradedFromVersion_
@property(readonly, assign, nonatomic) int targetType;	// @dynamic
@property(assign, nonatomic) int targetType;	// G=0x468f31; S=0x468f41; @synthesize=targetType_
@property(assign) BOOL testEnv;	// G=0x467ae9; S=0x467b0d; @synthesize=testEnv_
@property(copy, nonatomic) NSString *udid;	// G=0x468ea1; S=0x468eb5; @synthesize=udid_
@property(readonly, assign, nonatomic) NSString *udid;	// @dynamic
@property(copy) NSString *uiBootUrl;	// @dynamic
@property(copy) NSString *uiBootUrl;	// G=0x4693f1; S=0x469405; @synthesize=uiBootUrl_
@property(copy, nonatomic) NSArray *userAccountPreferredLanguages;	// @dynamic
@property(copy, nonatomic) NSArray *userAccountPreferredLanguages;	// G=0x469055; S=0x467a71; @synthesize=userAccountPreferredLanguages_
@property(readonly, assign, nonatomic) NSMutableArray *userAgentApplicationComments;	// @dynamic
@property(retain, nonatomic) NSMutableArray *userAgentApplicationComments;	// G=0x469269; S=0x469279; @synthesize=userAgentApplicationComments_
@property(readonly, assign, nonatomic) NSString *userAgentApplicationName;	// @dynamic
@property(copy, nonatomic) NSString *userAgentApplicationName;	// G=0x469221; S=0x469235; @synthesize=userAgentApplicationName_
@property(readonly, assign, nonatomic) NSString *userAgentApplicationVersion;	// @dynamic
@property(copy, nonatomic) NSString *userAgentApplicationVersion;	// G=0x469245; S=0x469259; @synthesize=userAgentApplicationVersion_
@property(copy) NSString *userEmail;	// @dynamic
@property(copy) NSString *userEmail;	// G=0x4696ed; S=0x469701; @synthesize=userEmail_
@property(assign) BOOL userForciblyLoggedOut;	// @dynamic
@property(assign) BOOL userForciblyLoggedOut;	// G=0x4699b5; S=0x4699cd; @synthesize=userForciblyLoggedOut_
@property(copy) NSString *userId;	// @dynamic
@property(copy) NSString *userId;	// G=0x469735; S=0x469749; @synthesize=userId_
@property(copy) NSString *userPassword;	// @dynamic
@property(copy) NSString *userPassword;	// G=0x469711; S=0x469725; @synthesize=userPassword_
@property(copy, nonatomic) NSString *uuidStartTime;	// G=0x468fd5; S=0x468fe9; @synthesize=uuidStartTime_
@property(retain) NetflixNrdObjectCallback *validateDeviceCallback;	// @dynamic
@property(retain) NetflixNrdObjectCallback *validateDeviceCallback;	// G=0x469759; S=0x46976d; @synthesize=validateDeviceCallback_
@property(copy, nonatomic) NSString *version;	// G=0x468e59; S=0x468e6d; @synthesize=version_
@property(readonly, assign, nonatomic) NSString *version;	// @dynamic
+ (id)allocWithZone:(NSZone *)zone;	// 0x462e95
+ (id)sharedInstance;	// 0x462da9
- (id)init;	// 0x462f91
// declared property getter: - (id)accounts;	// 0x4692ad
- (void)addDeviceTokensCallback:(id)callback;	// 0x4d2311
// declared property getter: - (id)apiServerHostname;	// 0x469319
// declared property getter: - (id)apiUUID;	// 0x467495
// declared property getter: - (id)apiVersion;	// 0x469361
// declared property getter: - (BOOL)appleTV;	// 0x468f51
// declared property getter: - (id)applicationName;	// 0x468ff9
- (void)applyBuiltinConfig:(id)config;	// 0x469aa5
- (id)autorelease;	// 0x462f85
- (void)buildPreferredLanguagesForApi;	// 0x465dc9
// declared property getter: - (id)builtinConfig;	// 0x469615
// declared property getter: - (unsigned)certificationVersion;	// 0x467985
- (void)checkIfStartupComplete;	// 0x4652fd
// declared property getter: - (id)configError;	// 0x4695f1
- (id)configQueryParams;	// 0x46b96d
// declared property getter: - (id)configServerUrl;	// 0x46933d
// declared property getter: - (id)configurationItems;	// 0x4692f5
- (void)configure:(id)configure;	// 0x46ad71
- (id)configure:(id)configure error:(id *)error;	// 0x46a7b9
// declared property getter: - (ConsoleSink *)consoleSink;	// 0x469931
// declared property getter: - (id)contentProfiles;	// 0x4676e1
- (void)cookieChanged:(id)changed;	// 0x46a471
// declared property getter: - (BOOL)cookiesDirty;	// 0x46977d
- (id)copyWithZone:(NSZone *)zone;	// 0x462f79
- (void)createDeviceAccountForValidateDeviceCallback:(id)validateDeviceCallback;	// 0x4cf419
- (id)createEsn:(id)esn model:(id)model udid:(id)udid;	// 0x464a11
// declared property getter: - (id)customConfig;	// 0x469639
// declared property getter: - (Class)customNetflixConfigClass;	// 0x468e35
// declared property getter: - (id)dataDirectory;	// 0x4698e9
- (void)dealloc;	// 0x4633f5
- (void)debugHttp:(BOOL)http;	// 0x468d65
- (void)debugNfhlsProtocol:(BOOL)protocol;	// 0x468d9d
// declared property getter: - (id)defaultGenericFeedUrl;	// 0x4693a9
- (double)defaultReconfigureTimeInterval;	// 0x46a459
// declared property getter: - (id)defaultUiBootUrl;	// 0x469385
// declared property getter: - (BOOL)deferredStop;	// 0x468de5
// declared property getter: - (id)deviceLanguage;	// 0x469041
// declared property getter: - (id)deviceModel;	// 0x468e7d
// declared property getter: - (id)didFailLoginRequiredNotificationName;	// 0x469135
// declared property getter: - (id)didLoginRequiredNotificationName;	// 0x469111
// declared property getter: - (id)esn;	// 0x468f0d
// declared property getter: - (id)esnPrefix;	// 0x468ee9
- (id)esnPrefix:(int)prefix model:(id)model;	// 0x464919
// declared property getter: - (bool)factoryReset;	// 0x46990d
- (void)factoryResetDevice;	// 0x464531
- (id)fetchPreferredLanguages:(BOOL)languages error:(id *)error;	// 0x4d2f21
- (id)fetchUserId:(BOOL)anId error:(id *)error;	// 0x4d29a5
- (void)finishShutdown;	// 0x465d85
- (void)forceLogoutUser:(BOOL)user;	// 0x4d25c5
// declared property getter: - (id)genericFeedUrl;	// 0x4693cd
// declared property getter: - (id)geolocation;	// 0x46917d
// declared property getter: - (id)geolocationCountry;	// 0x4691a1
// declared property getter: - (id)geolocationLanguage;	// 0x4691e9
// declared property getter: - (id)geolocationLocale;	// 0x4691fd
// declared property getter: - (id)geolocationStatus;	// 0x4691c5
- (void)getDeviceTokens;	// 0x4d1dc1
- (void)getDeviceTokensCallback:(id)callback;	// 0x4d1d05
- (void)getDeviceTokensValidateDeviceAccountCallback:(id)callback;	// 0x4d1e99
// declared property getter: - (BOOL)gettingDeviceTokens;	// 0x468f81
// declared property getter: - (id)gettingDeviceTokensLock;	// 0x468fb1
- (id)handleCompletedActivation:(id)activation useInternal:(BOOL)internal error:(id *)error;	// 0x4d3675
- (id)handleError:(id)error defaultErrorCode:(int)code;	// 0x4cf121
- (void)handleNetflixDidFailInitialConfigurationNotification:(id)handleNetflix;	// 0x466e79
- (void)handleNetflixDidFailInitialLoginRequiredNotification:(id)handleNetflix;	// 0x4670f1
- (void)handleNetflixDidFailSWUpgradeUserUpgradeNotification:(id)handleNetflix;	// 0x467329
- (void)handleNetflixDidFailStartNrdpNotification:(id)handleNetflix;	// 0x466cf5
- (void)handleNetflixDidFailStopNrdpNotification:(id)handleNetflix;	// 0x466d7d
- (void)handleNetflixDidFailUpdateConfigurationNotification:(id)handleNetflix;	// 0x466fe1
- (void)handleNetflixDidInitialConfigurationNotification:(id)handleNetflix;	// 0x466d8d
- (void)handleNetflixDidInitialLoginRequiredNotification:(id)handleNetflix;	// 0x467059
- (void)handleNetflixDidSWUpgradeUserUpgradeNotification:(id)handleNetflix;	// 0x4671bd
- (void)handleNetflixDidStartNrdpNotification:(id)handleNetflix;	// 0x466a25
- (void)handleNetflixDidStopNrdpNotification:(id)handleNetflix;	// 0x466d6d
- (void)handleNetflixDidUpdateConfigurationNotification:(id)handleNetflix;	// 0x466f19
- (BOOL)hasDoubleBoundCookies;	// 0x4d240d
- (id)hashUdid:(id)udid;	// 0x464795
// declared property getter: - (id)hashedUdid;	// 0x468ec5
- (id)hexify:(char *)hexify length:(unsigned)length;	// 0x464715
// declared property getter: - (id)hostName;	// 0x46901d
- (void)indicateGettingDeviceTokens;	// 0x4d22b5
// declared property getter: - (BOOL)initialConfigurationCompleted;	// 0x46950d
// declared property getter: - (BOOL)initialLoginRequiredCompleted;	// 0x46956d
// declared property getter: - (id)initialLoginRequiredError;	// 0x4695cd
// declared property getter: - (BOOL)intBasedM3u8;	// 0x469849
// declared property getter: - (BOOL)iosSWUpdateCompleted;	// 0x46959d
- (BOOL)isLoggingToConsole;	// 0x468ced
// declared property getter: - (BOOL)isTerminating;	// 0x4699e5
// declared property getter: - (id)localhost;	// 0x4698a9
// declared property getter: - (int)localhostPort;	// 0x4698c9
- (void)login:(id)login password:(id)password;	// 0x4ce9b1
- (void)loginEmailActivateCallback:(id)callback;	// 0x4d0ac9
// declared property getter: - (id)loginLock;	// 0x4697d1
- (void)loginNewUserSignUpActivateCallback:(id)callback;	// 0x4d0ed1
// declared property getter: - (BOOL)loginProcessing;	// 0x4697f5
- (void)loginRequired;	// 0x4ce975
// declared property getter: - (BOOL)loginRequiredAllowedForStartup;	// 0x46953d
- (void)loginRequiredAsync;	// 0x4cf9f1
- (void)loginRequiredDeactivateAllCallback:(id)callback;	// 0x4d0049
- (void)loginRequiredDeviceTokensCallback:(id)callback;	// 0x4cfc55
- (void)loginRequiredValidateDeviceAccountAfterDeactivateAllCallback:(id)callback;	// 0x4cfeed
- (void)loginRequiredValidateDeviceAccountCallback:(id)callback;	// 0x4d0149
- (void)loginValidateDeviceAccountCallback:(id)callback;	// 0x4d0c7d
- (void)loginWithTokens:(id)tokens;	// 0x4cec25
- (void)logout;	// 0x4ceead
- (void)logoutDeactivateAllCallback:(id)callback;	// 0x4d14a1
- (void)logoutDeviceTokensCallback:(id)callback;	// 0x4d11f9
- (void)logoutValidateDeviceAccountCallback:(id)callback;	// 0x4d135d
// declared property getter: - (id)masterM3u8Prefix;	// 0x469825
- (void)mediaAudioSelect:(id)select;	// 0x4ce93d
- (void)mediaBuffering:(double)buffering;	// 0x4ce775
- (void)mediaBufferingComplete:(double)complete;	// 0x4ce7b1
- (void)mediaClose;	// 0x4ce5d9
- (void)mediaEnd:(double)end reason:(id)reason;	// 0x4ce649
- (void)mediaNetworkSelection:(id)selection;	// 0x4ce905
- (void)mediaOpen:(id)open params:(id)params;	// 0x4ce2a5
- (void)mediaPause:(double)pause;	// 0x4ce6c1
- (void)mediaPlay:(double)play;	// 0x4ce685
- (void)mediaReposition:(double)reposition;	// 0x4ce739
- (void)mediaStop:(double)stop;	// 0x4ce60d
- (void)mediaSubtitlesDisable;	// 0x4ce89d
- (void)mediaSubtitlesSelect:(id)select;	// 0x4ce865
- (void)mediaSubtitlesSelectAbort;	// 0x4ce8d1
- (void)mediaUnpause:(double)unpause;	// 0x4ce6fd
- (void)mediaUpdatePts:(double)pts;	// 0x4ce7ed
- (void)mediaUpdatePts:(double)pts accessLogEvents:(id)events;	// 0x4ce829
- (id)modelGroupKeys;	// 0x46a0d5
- (id)modelName;	// 0x4648a9
// declared property getter: - (NBPApplication *)nbp;	// 0x469989
- (id)nccpCAFilePath;	// 0x46a3ed
// declared property getter: - (id)nccpServerUrl;	// 0x467d91
// declared property getter: - (id)netflixIdKey;	// 0x46965d
// declared property getter: - (id)netflixIdValue;	// 0x469681
// declared property getter: - (BOOL)nfhlsProtocol;	// 0x468e15
// declared property getter: - (NrdLib *)nrdLib;	// 0x46995d
// declared property getter: - (int)nrdLogLevel;	// 0x468e25
- (BOOL)nrdpIdentityMatchesCookies;	// 0x4cf5d9
// declared property getter: - (BOOL)nrdpStartCompleted;	// 0x4694b9
// declared property getter: - (id)nrdpStartError;	// 0x4694e9
- (void)observeRuntimeNotifications;	// 0x4666f5
- (void)observeSWUpgradeNotifications;	// 0x466901
- (void)observeShutdownNotifications;	// 0x465a25
- (void)observeStartupNotifications;	// 0x465081
// declared property getter: - (id)parameterItems;	// 0x4692d1
// declared property getter: - (id)periodicWorkerThread;	// 0x46942d
// declared property getter: - (double)periodicWorkerTimeInterval;	// 0x469415
// declared property getter: - (id)pingLock;	// 0x4697ad
// declared property getter: - (int)pinnedCdnId;	// 0x469869
- (void)postFailureNotification:(id)notification error:(id)error clearProgress:(BOOL)progress;	// 0x4d2011
- (void)postInternalNotificationName:(id)name object:(id)object error:(id)error;	// 0x46a6f5
- (void)postInternalNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x46a771
- (void)postLoginFailure;	// 0x4d26f1
- (void)postLoginFailure:(id)failure clearProgress:(BOOL)progress;	// 0x4d21ad
- (void)postLoginRequiredFailure:(id)failure clearProgress:(BOOL)progress;	// 0x4d2151
- (void)postLoginRequiredSuccess:(id)success;	// 0x4d211d
- (void)postLoginSuccess:(id)success;	// 0x4d218d
- (void)postLoginWithTokensFailure:(id)tokensFailure clearProgress:(BOOL)progress;	// 0x4d2219
- (void)postLoginWithTokensSuccess:(id)tokensSuccess;	// 0x4d21f9
- (void)postLogoutFailure:(id)failure clearProgress:(BOOL)progress;	// 0x4d2285
- (void)postLogoutSuccess:(id)success;	// 0x4d2265
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x46a5dd
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x46a659
- (void)postNotificationOnMainThread:(id)thread;	// 0x46ba89
- (void)postSuccessNotification:(id)notification userInfo:(id)info;	// 0x4d1f91
// declared property getter: - (id)preferredLanguagesForApi;	// 0x4690bd
// declared property getter: - (BOOL)preferredLanguagesSuccess;	// 0x4690e1
- (void)purgeIdentity;	// 0x4d1af9
- (void)reconfigure:(id)reconfigure;	// 0x46ae49
// declared property getter: - (double)reconfigureTimeInterval;	// 0x469451
- (void)refreshCookiesFromAPI;	// 0x4d5f79
- (void)registerDefaultParameterItems;	// 0x46610d
- (void)registerNfhlsProtocol:(BOOL)protocol;	// 0x468be5
- (oneway void)release;	// 0x462f81
- (void)removeDeviceTokensCallback:(id)callback;	// 0x4d236d
// declared property getter: - (id)reportablePlaybackActionId;	// 0x46b939
- (BOOL)reset;	// 0x463455
- (void)resetFeedUrls;	// 0x46a485
- (id)retain;	// 0x462f7d
- (unsigned)retainCount;	// 0x462f89
- (void)retrieveDeviceTokens;	// 0x4d32dd
// declared property getter: - (int)runtimeState;	// 0x468db9
- (void)scheduleFetchPreferredLanguage:(BOOL)language;	// 0x46b361
- (void)scheduleReconfigure;	// 0x469a01
// declared property getter: - (BOOL)scheduledPreferredLanguages;	// 0x46908d
// declared property getter: - (id)scheduledPreferredLanguagesLock;	// 0x469069
// declared property getter: - (id)secureNetflixIdKey;	// 0x4696a5
// declared property getter: - (id)secureNetflixIdValue;	// 0x4696c9
- (void)selectDeviceAccountForValidateDeviceCallback:(id)validateDeviceCallback;	// 0x4cf3ad
// declared property setter: - (void)setAccounts:(id)accounts;	// 0x4692c1
- (void)setActivationTokensFromHttpCookies;	// 0x4d27f9
// declared property setter: - (void)setApiServerHostname:(id)hostname;	// 0x46932d
// declared property setter: - (void)setApiVersion:(id)version;	// 0x469375
// declared property setter: - (void)setAppleTV:(BOOL)tv;	// 0x468f69
// declared property setter: - (void)setApplicationName:(id)name;	// 0x46900d
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x469629
// declared property setter: - (void)setConfigError:(id)error;	// 0x469605
// declared property setter: - (void)setConfigServerUrl:(id)url;	// 0x469351
// declared property setter: - (void)setConfigurationItems:(id)items;	// 0x469309
// declared property setter: - (void)setConsoleSink:(ConsoleSink *)sink;	// 0x469945
// declared property setter: - (void)setCookiesDirty:(BOOL)dirty;	// 0x469795
// declared property setter: - (void)setCustomConfig:(id)config;	// 0x46964d
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x468e49
// declared property setter: - (void)setDataDirectory:(id)directory;	// 0x4698fd
// declared property setter: - (void)setDefaultGenericFeedUrl:(id)url;	// 0x4693bd
// declared property setter: - (void)setDefaultUiBootUrl:(id)url;	// 0x469399
// declared property setter: - (void)setDeferredStop:(BOOL)stop;	// 0x468dfd
// declared property setter: - (void)setDeviceLanguage:(id)language;	// 0x467989
// declared property setter: - (void)setDeviceModel:(id)model;	// 0x468e91
- (BOOL)setDeviceTokensFromNccpCookies:(id)nccpCookies;	// 0x4d15a1
// declared property setter: - (void)setDidFailLoginRequiredNotificationName:(id)failLoginRequiredNotificationName;	// 0x469149
// declared property setter: - (void)setDidLoginRequiredNotificationName:(id)loginRequiredNotificationName;	// 0x469125
// declared property setter: - (void)setEsn:(id)esn;	// 0x468f21
// declared property setter: - (void)setEsnPrefix:(id)prefix;	// 0x468efd
// declared property setter: - (void)setFactoryReset:(bool)reset;	// 0x469921
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x4693e1
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x469191
// declared property setter: - (void)setGeolocationCountry:(id)country;	// 0x4691b5
// declared property setter: - (void)setGeolocationLanguage:(id)language;	// 0x4679fd
// declared property setter: - (void)setGeolocationLocale:(id)locale;	// 0x469211
// declared property setter: - (void)setGeolocationStatus:(id)status;	// 0x4691d9
// declared property setter: - (void)setGettingDeviceTokens:(BOOL)tokens;	// 0x468f99
// declared property setter: - (void)setGettingDeviceTokensLock:(id)lock;	// 0x468fc5
// declared property setter: - (void)setHashedUdid:(id)udid;	// 0x468ed9
// declared property setter: - (void)setHostName:(id)name;	// 0x469031
// declared property setter: - (void)setInitialConfigurationCompleted:(BOOL)completed;	// 0x469525
// declared property setter: - (void)setInitialLoginRequiredCompleted:(BOOL)completed;	// 0x469585
// declared property setter: - (void)setInitialLoginRequiredError:(id)error;	// 0x4695e1
// declared property setter: - (void)setIntBasedM3u8:(BOOL)a8;	// 0x469859
// declared property setter: - (void)setIosSWUpdateCompleted:(BOOL)completed;	// 0x4695b5
// declared property setter: - (void)setLocalhost:(id)localhost;	// 0x4698b9
// declared property setter: - (void)setLocalhostPort:(int)port;	// 0x4698d9
- (void)setLogToConsole:(BOOL)console;	// 0x468cb5
// declared property setter: - (void)setLoginLock:(id)lock;	// 0x4697e5
// declared property setter: - (void)setLoginProcessing:(BOOL)processing;	// 0x46980d
// declared property setter: - (void)setLoginRequiredAllowedForStartup:(BOOL)startup;	// 0x469555
// declared property setter: - (void)setMasterM3u8Prefix:(id)prefix;	// 0x469839
// declared property setter: - (void)setNbp:(NBPApplication *)nbp;	// 0x46999d
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x467e75
// declared property setter: - (void)setNetflixIdKey:(id)key;	// 0x469671
// declared property setter: - (void)setNetflixIdValue:(id)value;	// 0x469695
- (void)setNetflixTokensFromNccpCookies:(id)nccpCookies;	// 0x4d1835
// declared property setter: - (void)setNfhlsProtocol:(BOOL)protocol;	// 0x4675c1
// declared property setter: - (void)setNrdLib:(NrdLib *)lib;	// 0x469971
// declared property setter: - (void)setNrdLogLevel:(int)level;	// 0x468d21
// declared property setter: - (void)setNrdpStartCompleted:(BOOL)completed;	// 0x4694d1
// declared property setter: - (void)setNrdpStartError:(id)error;	// 0x4694fd
// declared property setter: - (void)setParameterItems:(id)items;	// 0x4692e5
// declared property setter: - (void)setPeriodicWorkerThread:(id)thread;	// 0x469441
// declared property setter: - (void)setPeriodicWorkerTimeInterval:(double)interval;	// 0x46769d
// declared property setter: - (void)setPingLock:(id)lock;	// 0x4697c1
// declared property setter: - (void)setPinnedCdnId:(int)anId;	// 0x469879
// declared property setter: - (void)setPreferredLanguagesForApi:(id)api;	// 0x4690d1
// declared property setter: - (void)setPreferredLanguagesSuccess:(BOOL)success;	// 0x4690f9
// declared property setter: - (void)setReconfigureTimeInterval:(double)interval;	// 0x469485
// declared property setter: - (void)setRuntimeState:(int)state;	// 0x468dcd
// declared property setter: - (void)setScheduledPreferredLanguages:(BOOL)languages;	// 0x4690a5
// declared property setter: - (void)setScheduledPreferredLanguagesLock:(id)lock;	// 0x46907d
// declared property setter: - (void)setSecureNetflixIdKey:(id)key;	// 0x4696b9
// declared property setter: - (void)setSecureNetflixIdValue:(id)value;	// 0x4696dd
// declared property setter: - (void)setSoftwareVersion:(id)version;	// 0x46929d
// declared property setter: - (void)setSupportUnmuxedStreams:(BOOL)streams;	// 0x469899
// declared property setter: - (void)setSwUpgradedFromVersion:(id)version;	// 0x46916d
// declared property setter: - (void)setTargetType:(int)type;	// 0x468f41
// declared property setter: - (void)setTestEnv:(BOOL)env;	// 0x467b0d
// declared property setter: - (void)setUdid:(id)udid;	// 0x468eb5
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x469405
- (void)setUseHttpServer:(BOOL)server;	// 0x4675a1
// declared property setter: - (void)setUserAccountPreferredLanguages:(id)languages;	// 0x467a71
- (void)setUserAgent:(id)agent;	// 0x464b61
// declared property setter: - (void)setUserAgentApplicationComments:(id)comments;	// 0x469279
// declared property setter: - (void)setUserAgentApplicationName:(id)name;	// 0x469235
// declared property setter: - (void)setUserAgentApplicationVersion:(id)version;	// 0x469259
// declared property setter: - (void)setUserEmail:(id)email;	// 0x469701
// declared property setter: - (void)setUserForciblyLoggedOut:(BOOL)anOut;	// 0x4699cd
// declared property setter: - (void)setUserId:(id)anId;	// 0x469749
// declared property setter: - (void)setUserPassword:(id)password;	// 0x469725
// declared property setter: - (void)setUuidStartTime:(id)time;	// 0x468fe9
// declared property setter: - (void)setValidateDeviceCallback:(id)callback;	// 0x46976d
// declared property setter: - (void)setVersion:(id)version;	// 0x468e6d
- (void)shutdown;	// 0x4639c1
// declared property getter: - (id)softwareVersion;	// 0x469289
- (void)start:(id)start params:(id)params;	// 0x46801d
- (void)startNrdp;	// 0x46596d
- (void)stop;	// 0x468891
- (void)stopAll;	// 0x465b49
- (void)stopNrdp;	// 0x465b85
- (void)stopToTerminate:(BOOL)terminate;	// 0x4688ed
// declared property getter: - (BOOL)supportUnmuxedStreams;	// 0x469889
// declared property getter: - (id)swUpgradedFromVersion;	// 0x469159
- (BOOL)syncNrdpWithCookies;	// 0x4cf74d
// declared property getter: - (int)targetType;	// 0x468f31
// declared property getter: - (BOOL)testEnv;	// 0x467ae9
// declared property getter: - (id)udid;	// 0x468ea1
// declared property getter: - (id)uiBootUrl;	// 0x4693f1
- (void)unobserveRuntimeNotifications;	// 0x466795
- (void)unobserveSWUpgradeNotifications;	// 0x4669a1
- (void)unobserveShutdownNotifications;	// 0x465ac5
- (void)unobserveStartupNotifications;	// 0x4651e9
- (void)unsupportedSWVersion:(id)version;	// 0x46a505
- (void)updateParams:(id)params;	// 0x468999
- (BOOL)updateStaleCredentials;	// 0x46a4dd
- (void)upgradeCustomerBoundCookiesToDoubleBound;	// 0x4d5e29
- (BOOL)upgradeUserForSWUpgrade;	// 0x466819
- (id)urlRequest:(id)request params:(id)params withHttpMethod:(id)httpMethod;	// 0x468c35
- (id)urlRequestInternal:(id)internal params:(id)params withHttpMethod:(id)httpMethod;	// 0x46b4b9
// declared property getter: - (id)userAccountPreferredLanguages;	// 0x469055
// declared property getter: - (id)userAgentApplicationComments;	// 0x469269
// declared property getter: - (id)userAgentApplicationName;	// 0x469221
// declared property getter: - (id)userAgentApplicationVersion;	// 0x469245
// declared property getter: - (id)userEmail;	// 0x4696ed
// declared property getter: - (BOOL)userForciblyLoggedOut;	// 0x4699b5
// declared property getter: - (id)userId;	// 0x469735
// declared property getter: - (id)userPassword;	// 0x469711
- (void)userUpgradeTokenActivateCallback:(id)callback;	// 0x4d6305
- (void)userUpgradeValidateDeviceCallback:(id)callback;	// 0x4d6179
// declared property getter: - (id)uuidStartTime;	// 0x468fd5
- (void)validateDevice:(id)device;	// 0x4d3431
// declared property getter: - (id)validateDeviceCallback;	// 0x469759
// declared property getter: - (id)version;	// 0x468e59
- (long long)webServiceGetLogTimeInMS;	// 0x46b311
@end
