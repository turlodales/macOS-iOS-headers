//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MXConfigurationChangeRecord;

@interface MXSessionConfigurationChangeRecord : NSObject
{
    unsigned int mSessionID;
    MXConfigurationChangeRecord *mSessionConfigurationChangeRecord;
}

@property(readonly) MXConfigurationChangeRecord *sessionConfigurationChangeRecord; // @synthesize sessionConfigurationChangeRecord=mSessionConfigurationChangeRecord;
@property(readonly) unsigned int sessionID; // @synthesize sessionID=mSessionID;
- (void)populateSessionConfigurationChangeRecord:(unsigned int)arg1 inSessionConfigurationChangeRecord:(id *)arg2;
- (id)init;

@end

