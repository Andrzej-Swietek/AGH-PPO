#ifndef ICE_MASHINE_H
#define ICE_MASHINE_H 

class IceMachine
{
private:
    int id;
    bool state;
    double capacity;
    double consumption;
    double powder;
public:
    /** @constructor
     * @return void
    */
    IceMachine();

    /** @destructor
     * @retrun void
    */
    ~IceMachine();


    /** @brief method that sets id
     * @param[in] number - new id 
     * @return void
    */
    void SetID(int number);


    /** @brief method that sets state
     * @param[in] state - on or off
     * @return void
    */
    void SetState(bool state);


    /** @brief method that sets capacity
     * @param[in] capacity - value how much fits
     * @return void
    */
    void SetCapacity(double capacity);


    /** @brief method that set how much of ingredients mashine uses
     * @param[in] consumption - value
     * @return void
    */
    void SetConsumption(double consumption);


    /** @brief method thats sets powder amount
     * @param[in] powder - new amount of powder
    */
    void SetPowder(double powder);


    /** @brief method that makes ice cream
     * @param[in] amount
     * @return void
     * 
    */
    void Make(int amount);

    /** @brief method that Presnts icecream
     * @return void
    */
    void Presentation();


    /** @brief method that starts mashine
     * @return void
    */
    void Start();


    /** @brief method that stops mashine 
     * @return void
    */
    void Stop();


    /** @brief method that reloads mashine 
     * @param[in] number by how much
     * @return void
    */
    void Reload(double number);


};



#endif