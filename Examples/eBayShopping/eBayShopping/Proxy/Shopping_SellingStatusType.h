// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_AmountType;

/**
 
 Contains various details about the current status of a listing. These
 values are computed by eBay and cannot be specified at listing time.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_SellingStatusType : NSObject <PicoBindable> {

@private
    Shopping_AmountType *_convertedCurrentPrice;
    Shopping_AmountType *_currentPrice;
    NSNumber *_quantitySold;
    NSMutableArray *_any;

}


/**
 
 Not used. See Item.ConvertedCurrentPrice.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *convertedCurrentPrice;

/**
 
 Not used. See Item.CurrentPrice and Variation.StartPrice.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *currentPrice;

/**
 
 The number of items sold from this variation. Subtract from
 Quantity to determine the number of items available.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantitySold;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
