/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVVersionInfo : XXUnknownSuperclass {
}
+ (int)compare3PartVersion:(id)version with3PartVersion:(id)a3PartVersion;	// 0x28640d
+ (int)compareEFIVersion:(id)version withEFIVersion:(id)efiversion;	// 0x2866c1
+ (int)compareIRVersion:(id)version withIRVersion:(id)irversion;	// 0x286739
+ (int)compareOSVersion:(id)version andBuild:(id)build withOSVersion:(id)osversion andBuild:(id)build4;	// 0x2865a5
+ (int)compareSIVersion:(id)version withSIVersion:(id)siversion;	// 0x28688d
+ (id)currentEFIVersion;	// 0x286651
+ (id)currentIRVersion;	// 0x286705
+ (id)currentOSBuildVersion;	// 0x2863f1
+ (id)currentOSVersion;	// 0x2863d5
+ (id)currentSIBootVersion;	// 0x28685d
+ (id)currentSIMainVersion;	// 0x286851
+ (BOOL)isSIFirmwareValid;	// 0x286889
+ (id)versionSoftware;	// 0x286a0d
+ (id)versionSoftwareBuild;	// 0x286a5d
@end
