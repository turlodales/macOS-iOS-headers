//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ShazamKit/SHConfiguration.h>

@class NSMutableArray, NSString;

@interface SHLocalConfiguration : SHConfiguration
{
    NSMutableArray *_localItems;
    NSString *_configurationID;
}

- (void).cxx_destruct;
@property(readonly) NSString *configurationID; // @synthesize configurationID=_configurationID;
@property(readonly) NSMutableArray *localItems; // @synthesize localItems=_localItems;
- (BOOL)addSignature:(id)arg1 representing:(id)arg2 error:(id *)arg3;
- (double)minimumSignatureLength;
- (id)init;

@end

