//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, ONOXMLElement, ONOXPathFunctionResult;
@protocol NSFastEnumeration;

@protocol ONOSearching
- (ONOXMLElement *)firstChildWithCSS:(NSString *)arg1;
- (void)enumerateElementsWithCSS:(NSString *)arg1 usingBlock:(void (^)(ONOXMLElement *, unsigned long long, char *))arg2;
- (void)enumerateElementsWithCSS:(NSString *)arg1 block:(void (^)(ONOXMLElement *))arg2;
- (id <NSFastEnumeration>)CSS:(NSString *)arg1;
- (ONOXMLElement *)firstChildWithXPath:(NSString *)arg1;
- (void)enumerateElementsWithXPath:(NSString *)arg1 usingBlock:(void (^)(ONOXMLElement *, unsigned long long, char *))arg2;
- (void)enumerateElementsWithXPath:(NSString *)arg1 block:(void (^)(ONOXMLElement *))arg2;
- (ONOXPathFunctionResult *)functionResultByEvaluatingXPath:(NSString *)arg1;
- (id <NSFastEnumeration>)XPath:(NSString *)arg1;
@end

