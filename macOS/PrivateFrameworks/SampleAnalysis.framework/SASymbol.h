//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SASymbol : NSObject
{
    unsigned long long _offsetIntoTextSegment;
    unsigned long long _length;
    NSString *_name;
    NSMutableArray *_sourceInfos;
}

+ (id)symbolWithCSSymbol:(struct _CSTypeRef)arg1 textSegmentLoadAddress:(unsigned long long)arg2;
+ (id)symbolWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 name:(id)arg3;
- (void).cxx_destruct;
@property(readonly) NSMutableArray *sourceInfos; // @synthesize sourceInfos=_sourceInfos;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned long long length; // @synthesize length=_length;
@property unsigned long long offsetIntoTextSegment; // @synthesize offsetIntoTextSegment=_offsetIntoTextSegment;
- (id)debugDescription;
- (id)addSourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 lineNum:(unsigned int)arg3 columnNum:(unsigned int)arg4 filePath:(id)arg5;
- (id)sourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1;
- (id)init;

@end

