//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _DPWordRecorder : NSObject
{
    unsigned long long _wordFragmentWidth;
    id <_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <_DPDataRecorder><_DPDataRecorderKeyProperties> recorder; // @synthesize recorder=_recorder;
@property(readonly, nonatomic) unsigned long long wordFragmentWidth; // @synthesize wordFragmentWidth=_wordFragmentWidth;
- (id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3;
- (id)description;
- (BOOL)record:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)init;

@end

