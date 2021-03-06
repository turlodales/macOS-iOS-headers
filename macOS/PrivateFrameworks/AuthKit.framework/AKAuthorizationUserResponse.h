//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAuthorizationScopesUserSelection, NSNumber, NSString;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationUserResponse : NSObject <NSSecureCoding>
{
    id <AKCredentialRequestProtocol> _selectedRequest;
    AKAuthorizationScopesUserSelection *_userSelection;
    NSNumber *_loginChoice;
    NSString *_rawAccountPassword;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *rawAccountPassword; // @synthesize rawAccountPassword=_rawAccountPassword;
@property(retain) NSNumber *loginChoice; // @synthesize loginChoice=_loginChoice;
@property(retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection; // @synthesize userSelection=_userSelection;
@property(retain, nonatomic) id <AKCredentialRequestProtocol> selectedRequest; // @synthesize selectedRequest=_selectedRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

