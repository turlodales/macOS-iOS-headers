//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PKFirmwareInstallationController : NSObject
{
    NSArray *_firmwareComponents;
    NSString *_sandboxPath;
}

@property(retain) NSString *sandboxPath; // @synthesize sandboxPath=_sandboxPath;
@property(retain) NSArray *firmwareComponents; // @synthesize firmwareComponents=_firmwareComponents;
- (void)installWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)shouldInstallReturningError:(id *)arg1;
- (id)firmwareComponentsOfType:(long long)arg1;
- (void)dealloc;
- (id)initWithFirmwareComponents:(id)arg1 sandboxPath:(id)arg2;

@end

