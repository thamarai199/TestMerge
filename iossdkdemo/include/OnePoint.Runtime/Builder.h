//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/RecordLibrary/RecordHelpers/Builder.java
//
//  Created by chinthan on 12/2/13.
//

#import <Foundation/Foundation.h>

@class RecordContext;
@protocol IScriptWriter;


@interface Builder : NSObject {
 @public
  RecordContext *__Context_;
}

- (id)initWithRecordContext:(RecordContext *)context withIScriptWriter:(id<IScriptWriter>)writer;
- (RecordContext *)getContext;
- (void)setContextWithRecordContext:(RecordContext *)value;
- (void)writeHeaderWithIScriptWriter:(id<IScriptWriter>)writer;
- (void)writeConstantPoolWithIScriptWriter:(id<IScriptWriter>)writer;
- (void)writeInterfacesWithIScriptWriter:(id<IScriptWriter>)writer;
- (void)writeMethodsWithIScriptWriter:(id<IScriptWriter>)writer;
- (void)writeFieldsWithIScriptWriter:(id<IScriptWriter>)writer;
- (void)writeAttributesWithIScriptWriter:(id<IScriptWriter>)writer
           withAttributeArray:(NSMutableArray *)attributes;
@end


