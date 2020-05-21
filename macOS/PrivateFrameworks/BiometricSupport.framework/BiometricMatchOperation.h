//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BiometricSupport/BiometricOperation.h>

@class NSData;

@interface BiometricMatchOperation : BiometricOperation
{
    CDStruct_143f644f _noBioLockoutAuthData;
    BOOL _forUnlock;
    BOOL _forCredentialSet;
    BOOL _forPreArm;
    BOOL _stopOnSuccess;
    BOOL _noBioLockout;
    unsigned int _userID;
    int _useCase;
    unsigned int _noBioLockoutUserID;
    unsigned int _processedFlags;
    NSData *_acmContext;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int processedFlags; // @synthesize processedFlags=_processedFlags;
@property(nonatomic) unsigned int noBioLockoutUserID; // @synthesize noBioLockoutUserID=_noBioLockoutUserID;
@property(nonatomic) int useCase; // @synthesize useCase=_useCase;
@property(retain, nonatomic) NSData *acmContext; // @synthesize acmContext=_acmContext;
@property(nonatomic) BOOL noBioLockout; // @synthesize noBioLockout=_noBioLockout;
@property(nonatomic) BOOL stopOnSuccess; // @synthesize stopOnSuccess=_stopOnSuccess;
@property(nonatomic) BOOL forPreArm; // @synthesize forPreArm=_forPreArm;
@property(nonatomic) BOOL forCredentialSet; // @synthesize forCredentialSet=_forCredentialSet;
@property(nonatomic) BOOL forUnlock; // @synthesize forUnlock=_forUnlock;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;
- (unsigned int)cancelledMessage;
@property(readonly, nonatomic) CDStruct_143f644f *noBioLockoutAuthData;
- (int)type;
- (id)init;

@end

