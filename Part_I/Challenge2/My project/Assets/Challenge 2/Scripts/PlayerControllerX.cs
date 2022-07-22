using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerX : MonoBehaviour
{
    public GameObject dogPrefab;
    private float rate = 1;
    // Update is called once per frame
    void Update()
    {
        // On spacebar press, send dog
        if (Input.GetKeyDown(KeyCode.Space) && rate<=0)
        {
            Instantiate(dogPrefab, transform.position, dogPrefab.transform.rotation);
            rate = 1;
        }
        if(rate >= 0)
        {
            rate -= Time.deltaTime;
        }
    }
}
