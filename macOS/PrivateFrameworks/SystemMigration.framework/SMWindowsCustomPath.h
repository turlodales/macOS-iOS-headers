//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SMWindowsCustomPath : NSObject
{
    BOOL _windowsPathRelativeToUserHome;
    BOOL _macPathRelativeToUserHome;
    NSString *_windowsPath;
    NSURL *_macPath;
    unsigned long long _size;
}

- (void).cxx_destruct;
@property unsigned long long size; // @synthesize size=_size;
@property BOOL macPathRelativeToUserHome; // @synthesize macPathRelativeToUserHome=_macPathRelativeToUserHome;
@property(retain) NSURL *macPath; // @synthesize macPath=_macPath;
@property BOOL windowsPathRelativeToUserHome; // @synthesize windowsPathRelativeToUserHome=_windowsPathRelativeToUserHome;
@property(retain) NSString *windowsPath; // @synthesize windowsPath=_windowsPath;
- (id)windowsPathForUser:(id)arg1;
- (id)description;
- (BOOL)isPerUser;

@end

