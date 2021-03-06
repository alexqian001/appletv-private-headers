/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSTask : NSObject {
}
@property(retain) id arguments;	// G=0x34de03d9; S=0x34de0229; converted property
@property(retain) id currentDirectoryPath;	// G=0x34de03fd; S=0x34de024d; converted property
@property(retain) id environment;	// G=0x34de03b5; S=0x34de0271; converted property
@property(retain) id launchPath;	// G=0x34de0391; S=0x34de0295; converted property
@property(retain) id standardError;	// G=0x34de04d5; S=0x34de0469; converted property
@property(retain) id standardInput;	// G=0x34de048d; S=0x34de0421; converted property
@property(retain) id standardOutput;	// G=0x34de04b1; S=0x34de0445; converted property
@property(copy) id terminationHandler;	// G=0x34de0151; S=0x34de0175; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x34de0525
+ (id)currentTaskDictionary;	// 0x34de0571
+ (id)launchedTaskWithDictionary:(id)dictionary;	// 0x34de0665
+ (id)launchedTaskWithLaunchPath:(id)launchPath arguments:(id)arguments;	// 0x34de06b9
- (id)init;	// 0x34de04f9
// converted property getter: - (id)arguments;	// 0x34de03d9
// converted property getter: - (id)currentDirectoryPath;	// 0x34de03fd
// converted property getter: - (id)environment;	// 0x34de03b5
- (void)interrupt;	// 0x34de02b9
- (BOOL)isRunning;	// 0x34de01e1
- (void)launch;	// 0x34de0205
// converted property getter: - (id)launchPath;	// 0x34de0391
- (int)processIdentifier;	// 0x34de036d
- (BOOL)resume;	// 0x34de0325
// converted property setter: - (void)setArguments:(id)arguments;	// 0x34de0229
// converted property setter: - (void)setCurrentDirectoryPath:(id)path;	// 0x34de024d
// converted property setter: - (void)setEnvironment:(id)environment;	// 0x34de0271
// converted property setter: - (void)setLaunchPath:(id)path;	// 0x34de0295
// converted property setter: - (void)setStandardError:(id)error;	// 0x34de0469
// converted property setter: - (void)setStandardInput:(id)input;	// 0x34de0421
// converted property setter: - (void)setStandardOutput:(id)output;	// 0x34de0445
// declared property setter: - (void)setTerminationHandler:(id)handler;	// 0x34de0175
// converted property getter: - (id)standardError;	// 0x34de04d5
// converted property getter: - (id)standardInput;	// 0x34de048d
// converted property getter: - (id)standardOutput;	// 0x34de04b1
- (BOOL)suspend;	// 0x34de0301
- (int)suspendCount;	// 0x34de0349
- (void)terminate;	// 0x34de02dd
// declared property getter: - (id)terminationHandler;	// 0x34de0151
- (int)terminationReason;	// 0x34de01bd
- (int)terminationStatus;	// 0x34de0199
@end

