//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMicrodataParserStackItem;

@interface SGMicrodataParser : NSObject
{
    SGMicrodataParserStackItem *_stackItem;
}

+ (id)parse:(id)arg1;
+ (id)whitespaceSplit:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SGMicrodataParserStackItem *stackItem; // @synthesize stackItem=_stackItem;
- (void)textContent:(id)arg1;
- (void)endElement;
- (void)startElement:(id)arg1 withAttributes:(id)arg2;
- (id)initWithDocument:(id)arg1;

@end

