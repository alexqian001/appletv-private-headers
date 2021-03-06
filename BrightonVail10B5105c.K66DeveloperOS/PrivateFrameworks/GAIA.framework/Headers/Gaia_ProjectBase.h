/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import "GAIA-Structs.h"
#import <NSObject.h> // Unknown library

@protocol iGaia_Woodpecker, iGaia_GrapeCalUiControl, iGaia_GrapeHost;

@interface Gaia_ProjectBase : NSObject {
	int stationId;	// 4 = 0x4
	BOOL serialNum[64];	// 8 = 0x8
	BOOL csvFileName[1024];	// 72 = 0x48
	iGaia_LogManager *lm;	// 1096 = 0x448
	iGaia_MultitouchDevice *mt;	// 1100 = 0x44c
	iGaia_SpecManager *sp;	// 1104 = 0x450
	id<iGaia_Woodpecker> wp;	// 1108 = 0x454
	id<iGaia_GrapeCalUiControl> sc;	// 1112 = 0x458
	id<iGaia_GrapeHost> grapehost;	// 1116 = 0x45c
	tGaia_SystemInfo *sysInfo;	// 1120 = 0x460
}
- (id)initWithSpecManager:(iGaia_SpecManager *)specManager;	// 0x374398a9
- (int)GetCbInfo:(unsigned char)info status:(char *)status failCnt:(char *)cnt;	// 0x3743a251
- (const char *)GetCsvFileName;	// 0x37439a81
- (id)GetGrapeHost;	// 0x3743a6d9
- (const iGaia_LogManager *)GetLogManager;	// 0x3743a639
- (const iGaia_MultitouchDevice *)GetMultitouchDevice;	// 0x3743a671
- (id)GetScreenControl;	// 0x3743a6c9
- (const char *)GetSerialNumber;	// 0x37439a49
- (const iGaia_SpecManager *)GetSpecManager;	// 0x3743a6a9
- (int)GetStationId;	// 0x37439a11
- (const tGaia_SystemInfo *)GetSystemInfo;	// 0x37439c29
- (id)GetWoodpecker;	// 0x3743a6b9
- (int)OpenLogFile:(const char *)file;	// 0x37439afd
- (int)PrintSystemInfo:(char *)info;	// 0x37439ff1
- (int)PrintTestStart:(char *)start;	// 0x3743a431
- (void)ResetMutitouchDevice;	// 0x3743a649
- (int)SetCb:(unsigned char)cb status:(unsigned char)status;	// 0x3743a409
- (int)SetCb:(unsigned char)cb status:(unsigned char)status swVersion:(const char *)version;	// 0x3743a33d
- (int)SetCsvFileName:(const char *)name;	// 0x37439a59
- (int)SetGrapeHost:(id)host;	// 0x37439ae1
- (int)SetLogRelay:(unsigned long)relay logSink:(id)sink;	// 0x37439a91
- (int)SetScreenColor:(char *)color;	// 0x3743ad21
- (int)SetScreenControl:(id)control;	// 0x37439ac5
- (int)SetScreenImage:(char *)image;	// 0x3743aba5
- (int)SetScreenMessage:(char *)message;	// 0x3743b119
- (int)SetScreenUnitName:(char *)name;	// 0x3743afa1
- (int)SetSerialNumber:(const char *)number;	// 0x37439a21
- (int)SetStationId:(int)anId;	// 0x374399f5
- (int)SetVerboseLevel:(char *)level;	// 0x37439b91
- (int)SetWoodpecker:(id)woodpecker;	// 0x37439aa9
- (int)SpecGeneratePlist:(char *)plist;	// 0x3743a855
- (int)SpecInit:(char *)init;	// 0x3743a6e9
- (int)SpecList:(char *)list;	// 0x3743a7a1
- (void)dealloc;	// 0x37439969
- (int)reboot:(char *)reboot;	// 0x3743b41d
- (int)shutdown:(char *)shutdown;	// 0x3743b465
@end

