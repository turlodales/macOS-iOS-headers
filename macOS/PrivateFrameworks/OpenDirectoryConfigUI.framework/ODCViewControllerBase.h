//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView, SFAuthorizationView;

__attribute__((visibility("hidden")))
@interface ODCViewControllerBase : NSObject
{
    SFAuthorizationView *_authView;
    NSView *_superview;
    BOOL _locked;
    NSString *_sourceNodeOfCurrentUser;
    BOOL _lookingForServers;
}

@property BOOL lookingForServers; // @synthesize lookingForServers=_lookingForServers;
@property(retain) NSString *sourceNodeOfCurrentUser; // @synthesize sourceNodeOfCurrentUser=_sourceNodeOfCurrentUser;
@property BOOL locked; // @synthesize locked=_locked;
@property(retain) NSView *superview; // @synthesize superview=_superview;
@property(nonatomic) SFAuthorizationView *authView; // @synthesize authView=_authView;
- (void)sheetControllerDone:(id)arg1;
- (void)closeSheetAndPrepareForRelease;
- (void)stopUpdating;
- (void)startUpdating;
- (void)lookForServers;
- (void)updateLocked;
- (void)dealloc;
- (void)awakeFromNib;

@end

