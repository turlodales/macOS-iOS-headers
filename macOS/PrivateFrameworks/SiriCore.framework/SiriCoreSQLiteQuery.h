//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SiriCoreSQLiteStatement;
@protocol SiriCoreSQLiteRecordBuilder;

@interface SiriCoreSQLiteQuery : NSObject
{
    NSString *_string;
    SiriCoreSQLiteStatement *_statement;
    NSArray *_parameters;
    id <SiriCoreSQLiteRecordBuilder> _recordBuilder;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <SiriCoreSQLiteRecordBuilder> recordBuilder; // @synthesize recordBuilder=_recordBuilder;
@property(readonly, copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) SiriCoreSQLiteStatement *statement; // @synthesize statement=_statement;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)description;
- (id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 recordBuilder:(id)arg4 options:(unsigned long long)arg5;

@end

