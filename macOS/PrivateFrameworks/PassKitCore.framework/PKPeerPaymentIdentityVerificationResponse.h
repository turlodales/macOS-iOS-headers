//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSArray, NSString, PKPeerPaymentAccount;

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse
{
    BOOL _complete;
    BOOL _manuallyTriggered;
    PKPeerPaymentAccount *_account;
    NSString *_title;
    NSString *_subtitle;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    NSArray *_requiredFieldsByPage;
    NSArray *_acceptableDocuments;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVersion;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL manuallyTriggered; // @synthesize manuallyTriggered=_manuallyTriggered;
@property(readonly, copy, nonatomic) NSString *encryptionVersion; // @synthesize encryptionVersion=_encryptionVersion;
@property(readonly, copy, nonatomic) NSArray *encryptionCertificates; // @synthesize encryptionCertificates=_encryptionCertificates;
@property(readonly, nonatomic) NSArray *acceptableDocuments; // @synthesize acceptableDocuments=_acceptableDocuments;
@property(readonly, copy, nonatomic) NSArray *requiredFieldsByPage; // @synthesize requiredFieldsByPage=_requiredFieldsByPage;
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) BOOL complete; // @synthesize complete=_complete;
- (id)initWithData:(id)arg1;

@end

