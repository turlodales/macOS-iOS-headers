//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SecurityInterface/SFCertificateTrustPanel.h>

@interface SFCertificateImportManager : SFCertificateTrustPanel
{
    id _reserved_SFCertificateImportManager;
}

+ (id)sharedCertificateImportManager;
- (void)setDelegate:(id)arg1;
- (void)setDidEndSelector:(SEL)arg1;
- (void)setContextInfo:(void *)arg1;
- (void)setPolicy:(struct __SecPolicy *)arg1;
- (void)setParentWindow:(id)arg1;
- (void)setDestinationKeychain:(struct __SecKeychain *)arg1;
- (void)setCertificates:(id)arg1;
- (void)import;
- (id)initWithCertificates:(id)arg1 toKeychain:(struct __SecKeychain *)arg2 parentWindow:(id)arg3 policy:(struct __SecPolicy *)arg4;
- (void)importCertificates:(id)arg1 toKeychain:(struct __SecKeychain *)arg2 parentWindow:(id)arg3 policy:(struct __SecPolicy *)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void *)arg7;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;
- (void)_bringUpTrustSheetForNextCertificate;
- (void)_addCertAndEndSheet:(struct __SecCertificate *)arg1 certData:(id)arg2 commonName:(id)arg3;
- (int)_addCert:(struct __SecCertificate *)arg1 certData:(id)arg2 commonName:(id)arg3;
- (void)_errSheetDidDismiss:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void *)_clientContextInfo;
- (id)_clientDelegate;
- (SEL)_clientDidEndSelector;
- (void)_setRef:(id *)arg1 toObj:(id)arg2;

@end

