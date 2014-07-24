/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NetflixNrdObjectCallback, NSString, NSDictionary, NSArray;

@interface NetflixRegistration : NetflixNrdObject <NetflixNrdObjectProtocol> {
	NetflixNrdObjectCallback *createDeviceAccountCallback_;	// 4 = 0x4
	NetflixNrdObjectCallback *selectDeviceAccountCallback_;	// 8 = 0x8
	NetflixNrdObjectCallback *unselectDeviceAccountCallback_;	// 12 = 0xc
	NetflixNrdObjectCallback *deactivateCallback_;	// 16 = 0x10
	NetflixNrdObjectCallback *deactivateAllCallback_;	// 20 = 0x14
}
@property(copy) NSDictionary *activationTokens;	// G=0x565bb9; S=0x565df9; 
@property(retain) NetflixNrdObjectCallback *createDeviceAccountCallback;	// G=0x567215; S=0x567229; @synthesize=createDeviceAccountCallback_
@property(readonly, assign) NSString *currentDeviceAccount;	// G=0x565ad9; 
@property(retain) NetflixNrdObjectCallback *deactivateAllCallback;	// G=0x5672a5; S=0x5672b9; @synthesize=deactivateAllCallback_
@property(retain) NetflixNrdObjectCallback *deactivateCallback;	// G=0x567281; S=0x567295; @synthesize=deactivateCallback_
@property(readonly, assign) NSArray *deviceAccounts;	// G=0x565a61; 
@property(readonly, assign) BOOL registered;	// G=0x565b51; 
@property(retain) NetflixNrdObjectCallback *selectDeviceAccountCallback;	// G=0x567239; S=0x56724d; @synthesize=selectDeviceAccountCallback_
@property(retain) NetflixNrdObjectCallback *unselectDeviceAccountCallback;	// G=0x56725d; S=0x567271; @synthesize=unselectDeviceAccountCallback_
+ (id)sharedInstance;	// 0x5658b5
- (void)activate:(id)activate params:(id)params;	// 0x5664d9
// declared property getter: - (id)activationTokens;	// 0x565bb9
- (void)addEventListener:(id)listener name:(id)name;	// 0x567185
- (void)cancelRendezvous;	// 0x566109
- (void)createDeviceAccount:(id)account;	// 0x566141
// declared property getter: - (id)createDeviceAccountCallback;	// 0x567215
// declared property getter: - (id)currentDeviceAccount;	// 0x565ad9
- (void)deactivate:(id)deactivate callback:(id)callback;	// 0x566399
- (void)deactivateAll:(id)all;	// 0x566461
// declared property getter: - (id)deactivateAllCallback;	// 0x5672a5
// declared property getter: - (id)deactivateCallback;	// 0x567281
- (void)dealloc;	// 0x5659a1
// declared property getter: - (id)deviceAccounts;	// 0x565a61
- (void)emailActivate:(id)activate password:(id)password;	// 0x5662d5
- (void)getDeviceTokens;	// 0x566281
- (BOOL)handleEvent:(id)event;	// 0x566655
- (void)massDeactivationCheck;	// 0x566361
// declared property getter: - (BOOL)registered;	// 0x565b51
- (void)removeEventListener:(id)listener name:(id)name;	// 0x5671cd
- (void)selectDeviceAccount:(id)account callback:(id)callback;	// 0x566189
// declared property getter: - (id)selectDeviceAccountCallback;	// 0x567239
// declared property setter: - (void)setActivationTokens:(id)tokens;	// 0x565df9
// declared property setter: - (void)setCreateDeviceAccountCallback:(id)callback;	// 0x567229
// declared property setter: - (void)setDeactivateAllCallback:(id)callback;	// 0x5672b9
// declared property setter: - (void)setDeactivateCallback:(id)callback;	// 0x567295
// declared property setter: - (void)setSelectDeviceAccountCallback:(id)callback;	// 0x56724d
// declared property setter: - (void)setUnselectDeviceAccountCallback:(id)callback;	// 0x567271
- (void)startRendezvous;	// 0x5660a5
- (void)tokenActivate:(id)activate;	// 0x5662b9
- (void)unselectDeviceAccount:(id)account;	// 0x566239
// declared property getter: - (id)unselectDeviceAccountCallback;	// 0x56725d
- (BOOL)validateDak:(id)dak;	// 0x56655d
@end
