//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLPhotoLibraryOptions : NSObject
{
    BOOL _automaticallyMergesContext;
    BOOL _preventsWaitingForRequiredState;
    int _libraryRole;
    long long _requiredState;
}

@property(nonatomic) BOOL preventsWaitingForRequiredState; // @synthesize preventsWaitingForRequiredState=_preventsWaitingForRequiredState;
@property(nonatomic) int libraryRole; // @synthesize libraryRole=_libraryRole;
@property(nonatomic) long long requiredState; // @synthesize requiredState=_requiredState;
@property(nonatomic) BOOL automaticallyMergesContext; // @synthesize automaticallyMergesContext=_automaticallyMergesContext;

@end

