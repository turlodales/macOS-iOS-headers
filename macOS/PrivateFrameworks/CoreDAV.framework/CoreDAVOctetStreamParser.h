//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreDAVResponseBodyParser.h"

@class NSError, NSMutableData, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser>
{
    NSMutableData *_octetStreamData;
    NSError *_parserError;
}

+ (BOOL)canHandleContentType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *octetStreamData; // @synthesize octetStreamData=_octetStreamData;
@property(readonly) NSError *parserError;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

